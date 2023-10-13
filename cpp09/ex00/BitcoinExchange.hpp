/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:27:55 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/27 17:27:59 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<iostream>
#include<map>
#include<fstream>
#include<string>
#include<sstream>
#include<stdio.h>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(std::string const &fileN);
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &other);
		BitcoinExchange &operator=(BitcoinExchange const &other);
		void Exec(std::string const &fileN);
		double Exchange(const std::string &date);
		int validDate(std::string date);
		int validValue(double value);
	
	private:
		std::map<std::string, double> data;
};

#endif
