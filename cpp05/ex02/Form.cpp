/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:27:25 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 14:27:26 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

Form::Form(): _gradeRequiredS(0), _gradeRequiredE(0)
{}

Form::Form(std::string name, bool isSigned, const int gradeRequiredS, const int gradeRequiredE): _gradeRequiredS(gradeRequiredS), _gradeRequiredE(gradeRequiredE)
{
	this->_name = name;
	this->_isSigned = isSigned;
	if (_gradeRequiredS < 1 || _gradeRequiredE < 1)
		throw GradeTooHighException();
	else if (_gradeRequiredS > 150 || _gradeRequiredE > 150)
		throw GradeTooLowException();	
}
		
Form::~Form()
{
	
}

const char	*Form::GradeTooHighException::what()const throw()
{
	return "Form : Grade is to high";
}

const char	*Form::GradeTooLowException::what() const throw ()
{
	return "Form : Grade is to low";
}

std::string	Form::getName()const
{
	return (this->_name);
}

int	Form::getGradeRequiredS()const
{
	return (this->_gradeRequiredS);
}

int	Form::getGradeRequiredE()const
{
	return (this->_gradeRequiredE);
}

int	Form::getIsSigned()const
{
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat bur)
{
	if (bur.getGrade() > _gradeRequiredS)
		throw GradeTooLowException();
	else if (this->_isSigned == false)
		std::cout << "Form " << getName() << " already signed" << std::endl;
	else
	{
		this->_isSigned = true;
		std::cout << bur.getName() << " signed the form " << getName() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &out, const Form& form) {
	out	<< "Form " << form.getName() << ", signed: "
		<< form.getIsSigned() << ", grade to sign: " << form.getGradeRequiredS()
		<< ", grade to execute: " << form.getGradeRequiredE() << std::endl;
	return out;
}
