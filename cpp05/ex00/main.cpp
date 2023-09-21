/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:31:02 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/21 14:24:57 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat	test("Maxime", 1);
		std::cout << test;
		test.incrementGrade();
		std::cout << test;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
		Bureaucrat	test2("Max", 150);
		std::cout << test2;
		test2.decrementGrade();
		std::cout << test2;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
		
}
