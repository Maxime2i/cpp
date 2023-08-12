/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:45:48 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 14:45:49 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


int main ()
{	
	std::cout << "Creation zombie1 sur la pile" << std::endl;
	std::cout << "Creation zombie2 sur le tas" << std::endl;
	std::cout << "Creation zombie3 : randomChump" << std::endl;
	Zombie zomb1("zombie1");
	Zombie *zomb2 = newZombie("zombie2");
	zomb2->announce();
	randomChump("zombie3");
	delete(zomb2);
	return 0;
}	
