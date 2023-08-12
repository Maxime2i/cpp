/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:18:49 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 19:18:50 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string	name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
	
	private:
		std::string	_name;
		Weapon	*_Weapon;
};




#endif
