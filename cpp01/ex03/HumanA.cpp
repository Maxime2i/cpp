/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:18:27 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 19:18:34 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _Weapon(weapon)
{
	this->_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
