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
#include"Intern.hpp"

int main()
{	
	try{
		Bureaucrat	Max("Max", 1);
		Intern someRandomIntern;
		AForm* rrf;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Max.signForm(*rrf);
		Max.executeForm(*rrf);
	}
	catch(std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
