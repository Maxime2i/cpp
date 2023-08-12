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
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main ()
{
	Animal defaut;
	Cat chat;
	Dog chien;
	WrongAnimal defaut2;
	WrongCat chat2;
	
	defaut.makeSound();
	chat.makeSound();
	chien.makeSound();

	defaut2.makeSound();
	chat2.makeSound();

	return 0;
}

/*
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

return 0;
}*/
