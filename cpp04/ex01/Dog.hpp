/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:20 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 18:29:22 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog &ref);
		~Dog();
		void makeSound()const; 
		std::string getType()const;
		Brain*	getBrain();
	
	private:
		Brain	*_brain;


};

#endif
