/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:27:27 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/27 17:27:28 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

int main(int ac, char**av)
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	BitcoinExchange btc("data.csv");
	btc.Exec(av[1]);
}
