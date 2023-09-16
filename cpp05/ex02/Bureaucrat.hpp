/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:31:15 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:16 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include<stdexcept>
#include"AForm.hpp"

class AForm;

class	Bureaucrat
{
	public:
		Bureaucrat(std::string	name, int	grade);
		~Bureaucrat();
		std::string	getName()const;
		int	getGrade()const;
		class GradeTooHighException: public std::exception {
			virtual const char	*what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char	*what() const throw();
		};
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm &form);
		void	executeForm(AForm const & form);
		
	private:
		std::string	_name;
		int	_grade;
		Bureaucrat();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
