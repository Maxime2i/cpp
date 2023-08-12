/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:20:48 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/10 13:20:49 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal est cree" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal a ete detruit" << std::endl;
}

void AAnimal::makeSound()const
{
	std::cout << type << " : [son de l'animal]" << std::endl;
}

std::string AAnimal::getType()const
{
	return (type);
}
