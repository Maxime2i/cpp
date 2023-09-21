/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:41:11 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 17:41:12 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include<cstdlib>

class Bureaucrat;
class AForm;

class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(const std::string target);
		virtual ~RobotomyRequestForm();
		void	execute(const Bureaucrat& executor) const;
		
	private:
		RobotomyRequestForm();
		
		
};

#endif
