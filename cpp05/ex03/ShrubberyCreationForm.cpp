/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:40:45 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 17:40:46 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("ShrubberyCreationForm", 145, 137, target)
{}


ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (_isSigned == false)
		throw ExecuteUnsignedException();
	if (_gradeRequiredE < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		std::fstream	fs;
		std::string	fileName = _target + "_shrubbery";
		fs.open(fileName.c_str(), std::fstream::out | std::fstream::trunc);
		if (!fs.good())
			std::cerr << "Error cannot opoen Shrubbery target file" << std::endl;
		fs <<
		"              * *\n"
		"           *    *  *\n"
		"      *  *    *     *  *\n"
		"     *     *    *  *    *\n"
		" * *   *    *    *    *   *\n"
		" *     *  *    * * .#  *   *\n"
		" *   *     * #.  .# *   *\n"
		"  *     \"#.  #: #\" * *    *\n"
		" *   * * \"#. ##\"       *\n"
		"   *       \"###\n"
		"             \"##\n"
		"              ##.\n"
		"              .##:\n"
		"              :###\n"
		"              ;###\n"
		"            ,####.\n"
		"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";
		fs.close();
	}
}
