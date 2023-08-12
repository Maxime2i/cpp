/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:07:56 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/07 18:07:57 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_type = "FragTrap ";
	_g = false;
	std::cout << _type << this->_name << " cree" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << _type << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << _type << this->_name << " n'as plus de vie ou d'ennergie " << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << _type << this->_name << " demande un highFives" << std::endl;
}
