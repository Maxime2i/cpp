/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:01:57 by mlangloi          #+#    #+#             */
/*   Updated: 2023/07/29 16:17:09 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::welcome(void)const {
	std::cout << std::endl;
	std::cout << "Bienvenue dans ton repertoire !" << std::endl;
	std::cout <<  std::endl;
	std::cout << "---------Action---------" << std::endl;
	std::cout << "ADD\t: Ajouter un contact" << std::endl;
	std::cout << "SEARCH\t: Chercher un contact" << std::endl;
	std::cout << "EXIT\t: Quitter le repertoire" << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout <<  std::endl;	
}

void	PhoneBook::addContact(void)
{
	static int	i;
	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::printContact(void)
{
	int i = 0;

	std::cout << std::endl;
	std::cout << "----------REPERTOIRE----------" << std::endl;
	for (i = 0; i < 8; i++)
		this->_contacts[i].affContact();
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
}

int	PhoneBook::read_input(void)const{
	int input = -1;
	bool valid = false;
	do
	{
		std::cout << "Entrez l'index du contact : " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input < 8))
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Mauvais index, recommencez !" << std::endl; 
		}
	} while (!valid);
	return (input);
}

void	PhoneBook::search(void)
{
	int i = this->read_input();
	this->_contacts[i].aff();
}
