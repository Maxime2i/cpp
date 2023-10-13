/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:08:39 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/29 14:08:40 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include<stack>

class RPN
{
	public:
		RPN();
		~RPN();
		RPN(RPN const &other);
		RPN &operator=(RPN const &other);
		void	calcul(std::string str);
	
	private:
		std::stack<double> numbers;
};

#endif
