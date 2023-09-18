/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:40:15 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 17:40:16 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	public:
		AForm(std::string name, const int gradeRequiredS, const int gradeRequiredE, std::string target);
		~AForm();
		AForm(AForm const &copy);
		AForm &operator=(AForm const &rhs);
		class GradeTooLowException : public std::exception{
			virtual const char	*what() const throw();
		};
		class GradeTooHighException : public std::exception{
			virtual const char	*what() const throw();
		};
		class ExecuteUnsignedException : public std::exception{
			virtual const char	*what() const throw();
		};
		std::string	getName()const;
		int	getGradeRequiredS()const;
		int	getGradeRequiredE()const;
		int	getIsSigned()const;
		void	beSigned(Bureaucrat &bur);
		void	execute(const Bureaucrat& executor) const;
		
	protected:
		std::string	_name;
		bool	_isSigned;
		const int	_gradeRequiredS;
		const int	_gradeRequiredE;
		const std::string	_target;
		
		AForm();
		virtual void	executeConcrete() const = 0;
		
};

std::ostream&	operator<<(std::ostream &out, const AForm& form);

#endif
