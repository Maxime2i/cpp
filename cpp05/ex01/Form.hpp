/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:27:21 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/21 14:26:16 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		Form(std::string name, const int gradeRequiredS, const int gradeRequiredE);
		~Form();
		Form(Form const &copy);
		Form &operator=(Form const &rhs);
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
		const std::string	_name;
		bool	_isSigned;
		const int	_gradeRequiredS;
		const int	_gradeRequiredE;
		
		Form();
		
};

std::ostream&	operator<<(std::ostream &out, const Form& form);

#endif
