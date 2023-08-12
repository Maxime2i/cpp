/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:38:25 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/03 16:38:26 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"replace.hpp"

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Erreur arrguments : './replace fichier str1 str2'" << std::endl;
		return 1;
	}
	else
	{
		Replace test(av[1]);
		test.replaceString(av[2], av[3]);
	}
	return 0;
}
