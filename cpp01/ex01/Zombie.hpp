/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:23:10 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 17:23:11 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	nom(std::string name);
	
	private:
		std::string name;
		

};

Zombie *zombieHorde( int N, std::string name );

#endif
