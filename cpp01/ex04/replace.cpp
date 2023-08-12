/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:51:25 by mlangloi          #+#    #+#             */
/*   Updated: 2023/08/03 16:51:27 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"replace.hpp"

Replace::Replace(std::string fichier)
{
	this->fichierIn = fichier;
	this->fichierOut = fichier + ".replace";
}

Replace::~Replace()
{
}

int	Replace::replaceString(std::string entre, std::string sortie)
{
	std::ifstream inputfile(fichierIn.c_str());
	if (!inputfile)
	{
		std::cerr << "Impossible d'ouvrir le fichier en lecture." << std::endl;
		return 1;
	}
	std::ofstream outputfile(fichierOut.c_str());
	if (!outputfile)
	{
		std::cerr << "Impossible d'ouvrir le fichier en ecriture." << std::endl;
		return 1;
	}
	char chaine;
	
	while (inputfile.get(chaine))
	{
		if (chaine == entre[0])
		{
			bool res = true;
			for (size_t i = 1; i < entre.length(); ++i)
			{
				if (!inputfile.get(chaine) || chaine != entre[i])
				{
					res = false;
					break;
				}
			}
			if (res)
			{
				outputfile << sortie;
				continue;
			}
			outputfile << entre[0];
			inputfile.putback(chaine);
		}
		else
		{
			outputfile << chaine;
		}
	}
	inputfile.close();
	outputfile.close();
	return 0;
}
