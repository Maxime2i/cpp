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

int main()
{
	Harl harl;
	std::string lvl;
	while (lvl.compare("EXIT"))
	{
		std::cout << "Indiquez le niveau :";
		std::cin >> lvl;
		harl.complain(lvl);
	}
	return 0;
}
