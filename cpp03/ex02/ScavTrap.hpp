/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:57:00 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/07 17:57:01 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include"ClapTrap.hpp"
#include<iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		void attack(const std::string &target);
		void guardGate();
	
	protected:
		bool _g;
		
};


#endif
