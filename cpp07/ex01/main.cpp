/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:53:40 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/16 14:53:41 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

void	printc(char c)
{
	std::cout << c << std::endl; 
}

void	printi(int i)
{
	std::cout << i << std::endl; 
}

int main()
{
	char tabc[] = {'a','b','c','d'};
	int	tabi[] = {1, 2, 3, 4, 5, 6, 7};

	iter<>(tabc, 4, printc);
	iter<>(tabi, 7, printi);
	return 0;
}
