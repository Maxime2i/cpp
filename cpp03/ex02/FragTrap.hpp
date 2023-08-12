/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:07:52 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/07 18:07:53 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ClapTrap.hpp"
#include<iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		void attack(const std::string &target);
		void highFivesGuys();
	
	protected:
		bool _g;
		
};


#endif
