/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:20:52 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/10 13:20:54 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include<iostream>

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		virtual void makeSound()const = 0;
		virtual std::string getType()const;
	
	protected:
		
		std::string type;

};

#endif
