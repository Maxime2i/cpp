/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:40:19 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 17:40:20 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

AForm::AForm(): _gradeRequiredS(0), _gradeRequiredE(0)
{}

AForm::AForm(std::string name, const int gradeRequiredS, const int gradeRequiredE, std::string target): _gradeRequiredS(gradeRequiredS), _gradeRequiredE(gradeRequiredE), _target(target)
{
	this->_name = name;
	this->_isSigned = false;
	if (_gradeRequiredS < 1 || _gradeRequiredE < 1)
		throw GradeTooHighException();
	else if (_gradeRequiredS > 150 || _gradeRequiredE > 150)
		throw GradeTooLowException();	
}
		
AForm::~AForm()
{
	
}

AForm::AForm(AForm const &copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeRequiredS(copy._gradeRequiredS), _gradeRequiredE(copy._gradeRequiredE)
{
}

AForm &AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

const char	*AForm::GradeTooHighException::what()const throw()
{
	return "AForm : Grade is to high";
}

const char	*AForm::GradeTooLowException::what() const throw ()
{
	return "AForm : Grade is to low";
}

std::string	AForm::getName()const
{
	return (this->_name);
}

int	AForm::getGradeRequiredS()const
{
	return (this->_gradeRequiredS);
}

int	AForm::getGradeRequiredE()const
{
	return (this->_gradeRequiredE);
}

int	AForm::getIsSigned()const
{
	return (this->_isSigned);
}

void	AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeRequiredS)
		throw GradeTooLowException();
	else if (this->_isSigned == true)
		std::cout << "AForm " << getName() << " already signed" << std::endl;
	else
	{
		this->_isSigned = true;
		std::cout << bur.getName() << " signed the AForm " << getName() << std::endl;
	}
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (_isSigned == false)
		throw ExecuteUnsignedException();
	if (_gradeRequiredE < executor.getGrade())
		throw GradeTooLowException();
	executeConcrete();
}

const char*	AForm::ExecuteUnsignedException::what() const throw() {
	return "Form: cannot execute unsigned form";
}

std::ostream&	operator<<(std::ostream &out, const AForm& AForm) {
	out	<< "AForm " << AForm.getName() << ", signed: "
		<< AForm.getIsSigned() << ", grade to sign: " << AForm.getGradeRequiredS()
		<< ", grade to execute: " << AForm.getGradeRequiredE() << std::endl;
	return out;
}
