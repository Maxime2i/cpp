/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:18:21 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 19:18:22 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string	name, Weapon	&weapon);
		~HumanA();
		void	attack();
	
	private:
		std::string	_name;
		Weapon&	_Weapon;
};




#endif
