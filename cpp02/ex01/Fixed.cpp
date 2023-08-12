/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:55:39 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/05 14:55:40 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbVirgule = 0;
}

Fixed::Fixed(const int nb): _nbVirgule(nb << _nbBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb): _nbVirgule(roundf(nb * (1 << _nbBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &nbr)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = nbr;
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
	return (this->_nbVirgule);
}

void Fixed::setRawBits(int const raw)
{
	this->_nbVirgule = raw;
}


float   Fixed::toFloat(void) const
{
	float n = static_cast<float>( this->getRawBits() ) / ( 1 << _nbBits );
	return (n);
}

int Fixed::toInt(void)const
{
	return (this->_nbVirgule >> _nbBits);
}

std::ostream & operator<<(std::ostream &n, Fixed const &i)
{
	n << i.toFloat();
	return (n);
}
