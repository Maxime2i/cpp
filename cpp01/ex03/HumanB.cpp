/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:18:43 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 19:18:44 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#include"HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_Weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (_Weapon != NULL)
		std::cout << this->_name << " attacks with their "  << this->_Weapon->getType() << std::endl;
	else
		std::cout << this->_name << " d'ont attacks : no weapon "  << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}
