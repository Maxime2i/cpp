/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:55:47 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/05 14:55:48 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &nbr);
		Fixed&operator=(const Fixed &nbr);
		~Fixed();
		int getRawBits(void)const;
		void setRawBits(int const raw);
		float toFloat(void)const;
		int toInt(void)const;
		bool operator>(const Fixed &nbr)const;
		bool operator<(const Fixed &nbr)const;
		bool operator>=(const Fixed &nbr)const;
		bool operator<=(const Fixed &nbr)const;
		bool operator==(const Fixed &nbr)const;
		bool operator!=(const Fixed &nbr)const;
		Fixed operator+(const Fixed &nbr)const;
		Fixed operator-(const Fixed &nbr)const;
		Fixed operator*(const Fixed &nbr)const;
		Fixed operator/(const Fixed &nbr)const;
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
				
	private:
		int _nbVirgule;
		static const int _nbBits = 8; 

};

std::ostream & operator<<(std::ostream &n, Fixed const &i);

#endif
