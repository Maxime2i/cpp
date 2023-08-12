/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:00:26 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 19:00:27 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Wrong Animal";
	std::cout << this->type << " est cree" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " a ete detruit" << std::endl;
}

void WrongAnimal::makeSound()const
{
	std::cout << type << " : [Wrong son de l'animal]" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return (type);
}
