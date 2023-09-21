/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:31:02 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/14 17:31:04 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

int main()
{	
	try{
		Bureaucrat	test("Max", 112);
		std::cout << test;
		Form	formulaire("tache", 120, 30);
		test.signForm(formulaire);
		std::cout << formulaire;
	}
	catch(std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
