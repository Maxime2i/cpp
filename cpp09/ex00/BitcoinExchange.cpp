/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:27:51 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/27 17:27:53 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(std::string const &fileN)
{
	std::ifstream file(fileN.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		unsigned int comma = line.find(",");
		if (comma == 4294967295)
		{
			std::cerr << "Error: Invalid format in data.csv : '" << line << "'" << std::endl;
			continue;
		}
		if (line.find_first_not_of("-,.0123456789") != std::string::npos)
		{
			std::cerr << "Error2: Invalid format in data.csv : '" << line << "'" << std::endl;
			continue;
		}
		std::string date = line.substr(0, comma);
		std::string valueStr = line.substr(comma + 1);
		double value;
		std::istringstream valueStream(valueStr);
		if (validDate(date))
		{
			std::cerr << "Error: Incorrect date : '" << line << "'"  << std::endl;
			continue;
		}
		if (!(valueStream >> value) || value < 0)
		{
			std::cerr << "Error: Invalid format of value : '" << valueStr << "'" << std::endl;
			continue;
		}
		data[date] = value;
	}
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) : data(other.data)
{}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	this->data = other.data;
	return (*this);
}

int BitcoinExchange::validDate(std::string date)
{
	unsigned int	d1 = date.find('-');
	unsigned int	d2 = date.rfind('-');
	
	if (d1 == 4294967295 || d1 == d2)
		return 1;
	std::string yearStr = date.substr(0, d1);
	std::string monthStr = date.substr(d1 + 1, d2 - d1 - 1);
	std::string dayStr = date.substr(d2 + 1);
	int year;
	int month;
	int day;
	std::istringstream yearStream(yearStr);
	std::istringstream monthStream(monthStr);
	std::istringstream dayStream(dayStr);
	if (!(yearStream >> year) || (!(monthStream >> month)) || (!(dayStream >> day)))
		return 1;
	if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
		return 1;
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30)
			return 1;
	}
	if (month == 2)
	{
		int yearB = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if ((yearB && day > 29) || (!yearB && day > 28))
			return 1;
	}
	if (year >= 2024 || (year == 2023 && month >= 11) || (year == 2023 && month >= 10 && day >= 5))
	{
		return 1;
	}
	return 0;
}

int BitcoinExchange::validValue(double value)
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return 1; 
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return 1;
	}
	return 0;
}

double BitcoinExchange::Exchange(const std::string &date)
{
	std::map<std::string, double>::iterator it = this->data.lower_bound(date);
	if (it != data.end() && it->first == date)
		return it->second;
	else if (!data.empty())
	{
		it--;
		return it->second;
	}
	return -1;
}

void BitcoinExchange::Exec(std::string const &fileN)
{
	std::ifstream file(fileN.c_str());
	std::string line;
	std::getline(file, line);
	if (line.empty())
		std::cout << "Eroor: Empty file or inexistant file." << std::endl;
	while (std::getline(file, line))
	{
		std::istringstream view(line);
		std::string date;
		double value;
		char pipe;
		if (!(view >> date >> pipe >> value))
		{
			std::cerr << "Error: bad input => '" << line << "'" << std::endl;
			continue;
		}
		if (pipe != '|')
		{
			std::cerr << "Error: Excepted '|' in line : '" << line << "'"  << std::endl;
			continue;
		}
		if (validDate(date))
		{
			std::cerr << "Error: Incorrect date : '" << line << "'"  << std::endl;
			continue;
		}
		if (validValue(value) == 1)
			continue;
		double exchangeValue = Exchange(date);
		if (exchangeValue == -1)
		{
			std::cerr << "Error: No exchange for date => '" << date << "'"  << std::endl;
			continue;
		}
		std::cout << date << " => " << value << " = " << value * exchangeValue << std::endl;
	}
}
