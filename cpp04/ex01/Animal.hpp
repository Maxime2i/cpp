/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:06 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 18:29:07 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound()const;
		virtual std::string getType()const;
	
	protected:
		std::string type;

};

#endif
