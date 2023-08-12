/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:23:53 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/02 17:23:54 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zomb = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zomb[i].nom(name);
	}
	return zomb;
}
