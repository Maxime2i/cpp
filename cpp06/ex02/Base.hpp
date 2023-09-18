/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:11:43 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:44 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include<iostream>
#include<stdlib.h>

class Base
{
	public:
		virtual ~Base();
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
