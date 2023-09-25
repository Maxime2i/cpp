/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:11:46 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:47 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"
#include"A.hpp"
#include"B.hpp"
#include"C.hpp"

Base::~Base()
{}

int j = 0;

Base	*generate(void)
{
	srand(time(0) + j);
	j++;
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	std::cout << "identify pointeur: ";
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "type is A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "type is B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "type is C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void	identify(Base &p)
{
	std::cout << "identify reference: ";
	try {
		static_cast<void>(dynamic_cast<const A &>(p));
		std::cout << "type is A" << std::endl;
	} catch (std::exception &e) {
	try {
		static_cast<void>(dynamic_cast<const B &>(p));
		std::cout << "type is B" << std::endl;
	} catch (std::exception &e) {
	try {
		static_cast<void>(dynamic_cast<const C &>(p));
		std::cout << "type is C" << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Unknown type" << std::endl;
	}
	}
	}
}

