/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:21:38 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/18 16:21:39 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern &Intern::operator=(Intern const &copy)
{
	(void)copy;
	return *this;
}

AForm	*makeShrubberyCreationForm(std::string name)
{
	return new ShrubberyCreationForm(name);
}

AForm	*makeRobotomyRequestForm(std::string name)
{
	return new RobotomyRequestForm(name);
}

AForm	*makePresidentialPardonForm(std::string name)
{
	return new PresidentialPardonForm(name);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	typedef AForm *(*funcPtr)(std::string target);
	std::string formNameArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	funcPtr funcArray[3] = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm};
	for (int i = 0; i < 3; i++)
	{
		if (name == formNameArray[i])
		{
		    std::cout << "Intern creates " << name << std::endl;
		    return (funcArray[i])(target);
		}
	}
	std::cout << "Intern can't create " << name << std::endl;
	return NULL;
}
