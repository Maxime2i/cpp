/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:41:15 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/15 17:41:16 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::executeConcrete() const {
	std::cout << "* DRILLING NOISES *" << std::endl << _target;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << " has been robotimized successfully " << std::endl;
	else
		std::cout << " the robotomy failed" << std::endl;
}
