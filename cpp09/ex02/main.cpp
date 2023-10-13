/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:08:30 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/29 14:08:31 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int main (int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "Error\n";
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		if (std::string(av[i]).find_first_not_of("0123456789 ") != std::string::npos)
		{
			std::cout << "Error\n";
			return (1);
		}
	}
	PmergeMe merge;
	std::vector<unsigned int> temp;
	for (int i = 1; i < ac; i++)
		temp.push_back(merge.stou(av[i]));
	std::vector<unsigned int>::iterator ite = temp.end();
	std::vector<unsigned int>::iterator it = temp.begin();
	std::vector<unsigned int>::iterator it2;
	for (;it != ite; it++)
	{
		for (it2 = it + 1; it2 != ite; it2++)
		if (*it2 == *it)
		{
			std::cout << "Error\n";
			return (1);
		}
	}
		
	
	
	
	merge.sortVector(ac, av);
	merge.sortList(ac, av);
}
