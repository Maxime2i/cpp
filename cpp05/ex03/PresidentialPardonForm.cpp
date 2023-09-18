/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardomForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:41:45 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 17:41:46 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("RobotomyRequestForm", 25, 5, target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::executeConcrete() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
