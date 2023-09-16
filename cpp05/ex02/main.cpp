/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:31:02 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:04 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main()
{	
	try{
		ShrubberyCreationForm	formulaire1("file");
		formulaire1.executeConcrete();
		RobotomyRequestForm	formulaire2("file2");
		formulaire2.executeConcrete();
		PresidentialPardonForm	formulaire3("file3");
		formulaire3.executeConcrete();
	}
	catch(std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat	test2("Alex", 122);
		PresidentialPardonForm	formulaire5("file5");
		test2.signForm(formulaire5);
		test2.executeForm(formulaire5);
	}
	catch(std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat	test3("Max", 1);
		RobotomyRequestForm	formulaire6("file6");
		test3.signForm(formulaire6);
		test3.executeForm(formulaire6);
	}
	catch(std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
