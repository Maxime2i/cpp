/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:13 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/09 18:29:14 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat &ref);
		~Cat();
		void makeSound()const;
		std::string getType()const;
		Brain*	getBrain();
		
	private:
		Brain	*_brain;

};

#endif
