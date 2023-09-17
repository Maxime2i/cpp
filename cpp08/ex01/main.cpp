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

#include"Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		const int i = 2;
		Span s = Span(i);
		s.addNumber(0);
		s.addNumber(42);
		s.addNumber(100);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Span s = Span(10);
		s.addNumber(1);
		s.addNumber(10);
		s.addNumber(6830);
		s.addNumber(3863);
		s.addNumber(557);
		s.addNumber(10000);
		s.addNumber(2001);
		s.addNumber(878);
		s.addNumber(120);
		s.addNumber(42);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		int n = 1;
		Span s = Span(20000);
		for (int i = 1; i <= 15000; i++)
		{
			s.addNumber(n);
			n += 1;
		}
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
