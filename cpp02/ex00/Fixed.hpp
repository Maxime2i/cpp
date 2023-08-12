/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:35:02 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/04 15:35:04 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &nbr);
		Fixed&operator=(const Fixed &nbr);
		~Fixed();
		int getRawBits(void)const;
		void setRawBits(int const raw);
	
	private:
		int _nbVirgule;
		static const int _nbBits = 8; 

};


#endif
