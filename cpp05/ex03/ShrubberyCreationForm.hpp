/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:40:41 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 17:40:42 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include<fstream>
#include<string>

class Bureaucrat;
class AForm;

class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(const std::string target);
		virtual ~ShrubberyCreationForm();
		virtual void	executeConcrete() const;
		
	private:
		ShrubberyCreationForm();
		
		
};

#endif
