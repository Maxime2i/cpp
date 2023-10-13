/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:08:43 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/29 14:08:44 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

RPN::RPN()
{}

RPN::~RPN()
{}

RPN::RPN(RPN const &other) : numbers(other.numbers)
{}

RPN &RPN::operator=(RPN const &other)
{
	this->numbers = other.numbers;
	return *this;
}

void	RPN::calcul(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		char c = str[i];
		if (c == ' ')
			continue;
		else if (isdigit(c))
		{
			int nb = c - '0';
			numbers.push(nb);
		}
		else if (c == '+' && numbers.size() >= 2)
		{
			double nb1 = numbers.top();
			numbers.pop();
			double nb2 = numbers.top();
			numbers.pop();
			numbers.push(nb1 + nb2);
		}
		else if (c == '-' && numbers.size() >= 2)
		{
			double nb1 = numbers.top();
			numbers.pop();
			double nb2 = numbers.top();
			numbers.pop();
			numbers.push(nb2 - nb1);
		}
		else if (c == '*' && numbers.size() >= 2)
		{
			double nb1 = numbers.top();
			numbers.pop();
			double nb2 = numbers.top();
			numbers.pop();
			numbers.push(nb1 * nb2);
		}
		else if (c == '/' && numbers.size() >= 2)
		{
			double nb1 = numbers.top();
			numbers.pop();
			double nb2 = numbers.top();
			numbers.pop();
			numbers.push(nb2 / nb1);
		}
		else
		{
			std::cout << "Error" << std::endl;
			return;
		}
	}
	if (numbers.size() == 1)
	{
		double res = numbers.top();
		numbers.pop();
		std::cout << res << std::endl;
	}
	else
		std::cout << "Error: " << numbers.size() << " numbers remaining" << std::endl;
}
