/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:26 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 18:29:27 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
/*

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;

return 0;
}*/


int main()
{/*
	Animal *tab[6];
	for (int i = 0; i < 3; i++)
		tab[i] = new Cat;
	for (int i = 3; i < 6; i++)
		tab[i] = new Dog;


	for (int i = 0; i < 6; i++)
		delete tab[i];*/
		
		
		
	Dog medor;
	Cat fifi;

	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	Dog & medor_copy_ref = medor_copy;
	Cat & fifi_copy_ref = fifi_copy;

	std::cout << std::endl;
	medor_copy_ref.makeSound();
	fifi_copy_ref.makeSound();
	std::cout << std::endl;

	return 0;
}
