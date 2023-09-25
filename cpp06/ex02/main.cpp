/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:31:02 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/18 17:28:37 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

int main()
{	
	Base *test;
	test = generate();
	identify(test);
	identify(*test);
	std::cout << std::endl;
	
	Base *test2;
	test2 = generate();
	identify(test2);
	identify(*test2);
	std::cout << std::endl;
	
	Base *test3;
	test3 = generate();
	identify(test3);
	identify(*test3);
	std::cout << std::endl;
	
	Base *test4;
	test4 = generate();
	identify(test4);
	identify(*test4);
	std::cout << std::endl;
	
	Base *test5;
	test5 = generate();
	identify(test5);
	identify(*test5);
	std::cout << std::endl;
	
	delete test;
	delete test2;
	delete test3;
	delete test4;
	delete test5;
}
