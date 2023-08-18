/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:02 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 18:29:04 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Animal::Animal()
{
	std::cout << "Animal est cree" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal a ete detruit" << std::endl;
}

void Animal::makeSound()const
{
	std::cout << type << " : [son de l'animal]" << std::endl;
}

std::string Animal::getType()const
{
	return (type);
}
