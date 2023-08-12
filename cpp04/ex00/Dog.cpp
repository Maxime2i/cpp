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
	std::cout << this->type << " est cree" << std::endl;
}

Dog::~Dog()
{
	std::cout << type << " a ete detruit" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << type << " : wof" << std::endl;
}

std::string Dog::getType()const
{
	return (type);
}
