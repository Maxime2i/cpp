/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:57:04 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/07 17:57:05 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"



ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_type = "ScavTrap ";
	_g = false;
	std::cout << _type << this->_name << " cree" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << _type << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << _type << this->_name << " n'as plus de vie ou d'ennergie " << std::endl;
}

void ScavTrap::guardGate()
{
	if (_g == false)
	{
		std::cout << _type << this->_name << " entre en mode Gate keeper" << std::endl;
		_g = true;	
	}
	else
		std::cout << _type << this->_name << " est deja en mode Gate keeper" << std::endl;
}
