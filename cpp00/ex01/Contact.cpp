/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:36:45 by mlangloi          #+#    #+#             */
/*   Updated: 2023/07/29 16:36:46 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str)const {
	std::string	entre = "";
	bool	valid = false;
	do
	{
		std::cout << str << std::flush;
		std::getline(std::cin, entre);
		if (std::cin.good() && !entre.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Entre incorect, reesayez !" << std::endl;
		}
	}while (!valid);
	return (entre);
}

void	Contact::init(void)
{
	std::cin.ignore();
	std::cout << std::endl;
	this->_firstName = this->_getInput("Entrez le prenom : ");
	this->_lastName = this->_getInput("Entrez le nom : ");
	this->_nickName = this->_getInput("Entrez le surnom : ");
	this->_phoneNumber = this->_getInput("Entrez le numero de telephone : ");
	this->_darkestSecret = this->_getInput("Entrez le plus lourd secret : ");
	std::cout << std::endl;
}

void	Contact::setIndex(int i)
{
	this->_index = i;
}

void	Contact::affContact(void)
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
		return ;
	std::cout << std::setw(10) << this->_index << "|";
	std::cout << std::setw(10) << this->len(this->_firstName) << "|";
	std::cout << std::setw(10) << this->len(this->_lastName) <<  "|";
	std::cout << std::setw(10) << this->len(this->_nickName) <<  "|";
	std::cout << std::endl;
}

std::string	Contact::len(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::aff(void)
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
	{
		std::cout << "Pas encore de contact avec cet index !" << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << this->_index << std::endl;
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickName << std::endl;
	std::cout << this->_phoneNumber << std::endl;
	std::cout << this->_darkestSecret << std::endl;
	std::cout << std::endl;
}
