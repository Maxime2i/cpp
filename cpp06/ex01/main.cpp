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

#include"Serializer.hpp"

int main ()
{
	Data	*test = new Data;
	Data	*test2 = new Data;
	uintptr_t	uptr;
	
	test->name = "code";
	test->number = 7;

	uptr = Serializer::serialize(test);
	test2 = Serializer::deserialize(uptr);

	if (test2 == test)
		std::cout << "Success, name: " << test2->name << " et number: " << test2->number << std::endl;
	else
	 	std::cout << "Fail" << std::endl;
	delete test;
	return (0);

	delete test;
	delete test2;
}
