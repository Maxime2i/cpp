/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:27:18 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/07 14:27:19 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main()
{
	ClapTrap Player1("player1");
	ScavTrap Player2("player2");
	FragTrap Player3("player3");
	std::cout << std::endl;
	
	Player1.takeDamage(5);
	Player2.takeDamage(50);
	Player3.takeDamage(50);
	std::cout << std::endl;
	
	Player1.beRepaired(15);
	Player2.beRepaired(150);
	Player3.beRepaired(150);
	std::cout << std::endl;
	
	Player1.attack("logan");
	Player2.attack("logan");
	Player3.attack("logan");
	std::cout << std::endl;
	
	Player2.guardGate();
	Player2.guardGate();
	Player3.highFivesGuys();
	std::cout << std::endl;
	
	Player1.takeDamage(42);
	Player2.takeDamage(420);
	Player3.takeDamage(420);
	std::cout << std::endl;
	
	Player1.attack("Max");
	Player2.attack("Max");
	Player3.attack("Max");
	std::cout << std::endl;
	return 0;
}
