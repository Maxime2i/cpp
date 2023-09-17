/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:54:10 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/16 14:54:11 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include<climits>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<iomanip>


class ScalarConverter
{
	public:
		~ScalarConverter();
		ScalarConverter (const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &rhs);
		static void	convert(const std::string input);
		static std::string	getType(std::string input);
		static void	printChar(char c);
		static void	printInt(long i);
		static void	printFloat(float f);
		static void	printDouble(double d);
		
	
	private:
		ScalarConverter();
		

};


#endif
