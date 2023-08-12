/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:10 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 18:29:11 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	_brain = new Brain;
	std::cout << this->type << " est cree" << std::endl;
}

Cat::Cat(Cat &ref)
{
	this->type = ref.getType();
	this->_brain = new Brain (*(ref.getBrain()));
	std::cout << this->type << " est cree en copie" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " a ete detruit" << std::endl;
	delete this->_brain;
}



void Cat::makeSound()const
{
	std::cout << type << " : miaou" << std::endl;
}

std::string Cat::getType()const
{
	return (type);
}

Brain*	Cat::getBrain()
{
	return (_brain);
}
