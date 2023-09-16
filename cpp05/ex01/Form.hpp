/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:27:21 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 14:27:22 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		Form(std::string name, bool isSigned, const int gradeRequiredS, const int gradeRequiredE);
		~Form();
		class GradeTooLowException : public std::exception{
			virtual const char	*what() const throw();
		};
		class GradeTooHighException : public std::exception{
			virtual const char	*what() const throw();
		};
		std::string	getName()const;
		int	getGradeRequiredS()const;
		int	getGradeRequiredE()const;
		int	getIsSigned()const;
		void	beSigned(Bureaucrat bur);
		
	private:
		std::string	_name;
		bool	_isSigned;
		const int	_gradeRequiredS;
		const int	_gradeRequiredE;
		
		Form();
		
};

std::ostream&	operator<<(std::ostream &out, const Form& form);

#endif
