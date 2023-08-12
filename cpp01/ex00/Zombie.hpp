/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:46:21 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 14:46:22 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
	
	private:
		std::string name;
		

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
