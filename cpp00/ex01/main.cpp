/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:53:47 by mlangloi          #+#    #+#             */
/*   Updated: 2023/07/29 16:09:12 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main (void)
{
	PhoneBook book;
	std::string action = "";
	
	book.welcome();
	while (action.compare("EXIT"))
	{
		if (action.compare("ADD") == 0)
			book.addContact();
		else if (action.compare("SEARCH") == 0)
		{
			book.printContact();
			book.search();
		}
		std::cout << "> ";
		std::cin >> action;
	}
	return (0);
}
