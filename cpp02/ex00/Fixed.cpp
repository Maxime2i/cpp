/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:35:09 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/04 15:35:11 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbVirgule = 0;
}

Fixed::Fixed(const Fixed &nbr)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(nbr.getRawBits());
}

Fixed&	Fixed::operator=(const Fixed &nbr)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &nbr)
		this->_nbVirgule = nbr.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbVirgule);
}

void Fixed::setRawBits(int const raw)
{
	this->_nbVirgule = raw;
}
