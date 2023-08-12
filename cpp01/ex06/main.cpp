/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:30:28 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/03 18:30:29 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Erreur arguments : ./HarlFilter niveau" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(av[1]);
	return 0;
}
