/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:51:30 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/03 16:51:31 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include<iostream>
#include<fstream>

class	Replace
{
	public:
		Replace(std::string fichier);
		~Replace();
		int	replaceString(std::string entre, std::string sortie);
	
	private:
		std::string	fichierIn;
		std::string	fichierOut;

};



#endif
