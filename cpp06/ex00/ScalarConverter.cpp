/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:54:14 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/16 14:54:17 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return *this;
}

void	ScalarConverter::printChar(char c)
{
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::printInt(long i)
{
	char c = static_cast<char>(i);
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	ScalarConverter::printFloat(float f)
{
	char c = static_cast<char>(f);
	if (std::isnan(f) || std::isinf(f) || f < CHAR_MIN || f > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (std::isnan(f) || std::isinf(f) || f > (float)INT_MAX || f < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::printDouble(double d)
{
	char c = static_cast<char>(d);
	if (std::isnan(d) || std::isinf(d) || d < CHAR_MIN || d > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (std::isnan(d) || std::isinf(d) || d > (double)INT_MAX || d < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::convert(const std::string input)
{
	std::string	type = getType(input);
	if (type == "char")
	{
		char	c = input[0];
		printChar(c);
	}
	else if (type == "int")
	{
		long	i = std::atol(input.c_str());
		printInt(i);
	}
	else if (type == "float")
	{
		float	f = std::strtof(input.c_str(), NULL);
		printFloat(f);
	}
	else if (type == "double")
	{
		double	d = std::strtod(input.c_str(), NULL);
		printDouble(d);
	}
	else
		std::cout << "type: " + type << std::endl;
}

std::string	ScalarConverter::getType(std::string input)
{
	if (input.length() == 0)
		return ("empty");
	else if (input.length() == 1 && !std::isdigit(input[0]))
		return ("char");
	else
	{
		char *end =NULL;
		if (end == input.c_str() + input.length())
			return ("int");
		else
		{
			end = NULL;
			std::strtod(input.c_str(), &end);
			if (end == input.c_str() + input.length())
				return ("double");
			else
			{
				end = NULL;
				std::strtod(input.c_str(), &end);
				if ((end == input.c_str() + input.length()) || (end[0] == 'f' && end[1] == 0))
					return ("float");
				else
					return ("unknown");
			}
		}
	}
}



