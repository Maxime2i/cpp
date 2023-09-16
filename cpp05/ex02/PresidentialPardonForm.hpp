/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardomForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:41:39 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 17:41:40 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include"Bureaucrat.hpp"
#include"AForm.hpp"

class Bureaucrat;
class AForm;

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(const std::string target);
		virtual ~PresidentialPardonForm();
		virtual void	executeConcrete() const;
		
	private:
		PresidentialPardonForm();
		
		
};

#endif
