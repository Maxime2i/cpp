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
	std::cout << this->type << " est cree" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " a ete detruit" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << type << " : miaou" << std::endl;
}

std::string Cat::getType()const
{
	return (type);
}
