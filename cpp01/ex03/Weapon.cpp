/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:17:57 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 19:17:58 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->type = weapon;
}

Weapon::~Weapon()
{
}
		
void	Weapon::setType(std::string	weapon)
{
	this->type = weapon;
}

std::string	Weapon::getType()
{
	return (this->type);
}
