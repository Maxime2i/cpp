/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:02:03 by mlangloi          #+#    #+#             */
/*   Updated: 2023/07/29 16:09:57 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <limits>
#include "Contact.hpp"

class PhoneBook
{
	public :
	PhoneBook();
	~PhoneBook();
	void	welcome(void)const;
	void	addContact(void);
	void	printContact(void);
	void	search(void);
	int	read_input(void)const;
	
	private:
		Contact	_contacts[8];
};

#endif
