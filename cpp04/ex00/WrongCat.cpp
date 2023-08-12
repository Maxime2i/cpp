/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:00:39 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 19:00:40 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Wrong Cat";
	std::cout << this->type << " est cree" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << " a ete detruit" << std::endl;
}

void WrongCat::makeSound()const
{
	std::cout << type << " : Wrong miaou" << std::endl;
}

std::string WrongCat::getType()const
{
	return (type);
}
