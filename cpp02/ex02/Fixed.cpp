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
	this->_nbVirgule = 0;
}

Fixed::Fixed(const int nb): _nbVirgule(nb << _nbBits)
{
}

Fixed::Fixed(const float nb): _nbVirgule(roundf(nb * (1 << _nbBits)))
{
}

Fixed::Fixed(const Fixed &nbr)
{
	*this = nbr;
}

Fixed&	Fixed::operator=(const Fixed &nbr)
{
	if (this != &nbr)
		this->_nbVirgule = nbr.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
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

bool Fixed::operator>(const Fixed &nbr)const
{
	return (this->getRawBits() > nbr.getRawBits());
}

bool Fixed::operator<(const Fixed &nbr)const
{
	return (this->getRawBits() < nbr.getRawBits());
}

bool Fixed::operator>=(const Fixed &nbr)const
{
	return (this->getRawBits() >= nbr.getRawBits());
}

bool Fixed::operator<=(const Fixed &nbr)const
{
	return (this->getRawBits() >= nbr.getRawBits());
}

bool Fixed::operator==(const Fixed &nbr)const
{
	return (this->getRawBits() == nbr.getRawBits());
}

bool Fixed::operator!=(const Fixed &nbr)const
{
	return (this->getRawBits() != nbr.getRawBits());
}

Fixed Fixed::operator+(const Fixed &nbr)const
{
	return (this->toFloat() + nbr.toFloat());
}

Fixed Fixed::operator-(const Fixed &nbr)const
{
	return (this->toFloat() - nbr.toFloat());
}

Fixed Fixed::operator*(const Fixed &nbr)const
{
	return (this->toFloat() * nbr.toFloat());
}

Fixed Fixed::operator/(const Fixed &nbr)const
{
	return (this->toFloat() / nbr.toFloat());
}	

Fixed &Fixed::operator++(void)
{
	++this->_nbVirgule;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._nbVirgule = this->_nbVirgule++;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	--this->_nbVirgule;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._nbVirgule = this->_nbVirgule--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
