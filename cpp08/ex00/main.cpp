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

#include"easyfind.hpp"

int	main()
{
	try
	{
		std::list<int>	lst;
		lst.push_back(7);
		lst.push_back(26);
		lst.push_back(18);
		lst.push_back(32);
		lst.push_back(160);
		std::cout << *(easyfind(lst, 32)) << std::endl << std::endl;

		std::vector<int>	vct;
		vct.push_back(7);
		vct.push_back(26);
		vct.push_back(18);
		vct.push_back(32);
		vct.push_back(160);
		std::cout << *(easyfind(vct, 18)) << std::endl << std::endl;

		std::deque<int>	dq;
		dq.push_back(7);
		dq.push_back(26);
		dq.push_back(18);
		dq.push_back(32);
		dq.push_back(160);

		std::cout << *(easyfind(dq, 160)) << std::endl << std::endl;
		std::cout << *(easyfind(dq, 25)) << std::endl;
	}
	catch (error &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
