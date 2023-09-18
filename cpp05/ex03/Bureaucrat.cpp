/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:31:21 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:22 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string	name, int	grade)
{
	this->_name = name;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	this->_name = copy._name;
	this->_grade = copy._grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}

const char	*Bureaucrat::GradeTooHighException::what()const throw()
{
	return "Grade is to high";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "Grade is to low";
}

std::string	Bureaucrat::getName()const
{
	return (this->_name);
}

int	Bureaucrat::getGrade()const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw GradeTooLowException();
	else
		this->_grade = _grade - 1;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw GradeTooHighException();
	else
		this->_grade = _grade - 1;
}

void	Bureaucrat::signForm(AForm &form)
{
	if (_grade > form.getGradeRequiredS())
		std::cout << _name << " couldn't sign " << form.getName() << " because is grade is too low" << std::endl;
	else if (form.getIsSigned() == true)
		std::cout << _name << " couldn't sign " << form.getName() << " because is already signed" << std::endl;
	else
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	if (_grade > form.getGradeRequiredE())
		std::cout << _name << " couldn't execute " << form.getName() << " because is grade is too low" << std::endl;
	else if (form.getIsSigned() == false)
		std::cout << _name << " couldn't execute " << form.getName() << " because isn't signed" << std::endl;
	else
	{
		std::cout << _name << " executed " << form.getName() << std::endl;
		form.execute(*this);
	}
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureaucrat) {
	out	<< bureaucrat.getName() << ", bureaucrat of grade "
		<< bureaucrat.getGrade() << std::endl;
	return out;
}

