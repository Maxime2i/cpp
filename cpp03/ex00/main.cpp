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

int main()
{
	ClapTrap Player1("player1");
	Player1.takeDamage(5);
	Player1.beRepaired(15);
	Player1.attack("logan");
	Player1.takeDamage(42);
	Player1.attack("Max");
	
	return 0;
}
