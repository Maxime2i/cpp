/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:21:49 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 17:21:51 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main ()
{	
	int N = 4;
	Zombie	*zomb = zombieHorde(N, "Zomb");
	
	for (int i = 0; i < N; i++)
	{
		zomb[i].announce();
	}
	delete [] zomb;
	return 0;
}	
