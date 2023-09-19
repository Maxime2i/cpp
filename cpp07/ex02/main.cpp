/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:53:40 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/16 14:53:41 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"

int main()
{
	Array<int> intArray(5);
	Array<int> intArray2(10);

	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i;

	std::cout << "Int Array 1: " << intArray << std::endl;

	for (unsigned int i = 0; i < intArray2.size(); i++)
		intArray2[i] = i;

	std::cout << "int Array 2: " << intArray2 << std::endl;

	try {
		std::cout << "Valid index: " << intArray[2] << std::endl;
		std::cout << "Invalid index: " << intArray[6] << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;


	Array<char> charArray(15);

	for (unsigned int i = 0; i < charArray.size(); i++)
		charArray[i] = 'a';

	std::cout << "Int Array 1: " << charArray << std::endl;

	try {
		std::cout << "Valid index: " << charArray[2] << std::endl;
		std::cout << "Invalid index: " << charArray[20] << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;


	Array<float> floatArray(10);

	for (unsigned int i = 0; i < floatArray.size(); i++)
		floatArray[i] = i * 2 + 0.2 / i;

	std::cout << "Int Array 1: " << floatArray << std::endl;

	try {
		std::cout << "Valid index: " << floatArray[2] << std::endl;
		std::cout << "Invalid index: " << floatArray[10] << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}
