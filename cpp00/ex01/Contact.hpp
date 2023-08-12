/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:36:51 by mlangloi          #+#    #+#             */
/*   Updated: 2023/07/29 16:36:52 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void	init(void);
		void	setIndex(int i);
		void	affContact(void);
		std::string	len(std::string str);
		void	aff(void);
		
		
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int	_index;
		
		std::string _getInput(std::string str)const;
};

#endif
