/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:14:59 by mlangloi          #+#    #+#             */
/*   Updated: 2023/07/28 14:48:00 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char) toupper(av[i][j]);
				j++;
			}
			i++;
			if (av[i] != NULL)
				std::cout << " ";
		}
	std::cout << std::endl;
	return (0);
}
