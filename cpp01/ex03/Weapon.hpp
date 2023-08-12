/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:18:03 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 19:18:04 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>

class Weapon
{
	public:
		Weapon(std::string weapon);
		~Weapon();
		std::string	getType();
		void	setType(std::string	weapon);
	
	private:
		std::string	type;
		
};

#endif
