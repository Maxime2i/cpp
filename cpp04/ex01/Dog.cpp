/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:17 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 18:29:18 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	_brain = new Brain;
	std::cout << this->type << " est cree" << std::endl;
}

Dog::Dog(Dog &ref)
{
	this->type = ref.getType();
	this->_brain = new Brain (*(ref.getBrain()));
	std::cout << this->type << " est cree en copie" << std::endl;
}

Dog::~Dog()
{
	std::cout << type << " a ete detruit" << std::endl;
	delete this->_brain;
}


void Dog::makeSound()const
{
	std::cout << type << " : wof" << std::endl;
}

std::string Dog::getType()const
{
	return (type);
}

Brain*	Dog::getBrain()
{
	return (_brain);
}
