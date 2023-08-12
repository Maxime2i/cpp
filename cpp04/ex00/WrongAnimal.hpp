/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:00:29 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 19:00:30 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();
		virtual void makeSound()const;
		virtual std::string getType()const;
	
	protected:
		std::string type;

};

#endif
