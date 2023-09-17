/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:15 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/17 17:46:16 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <list>
#include <numeric>

class Span
{
	public:
		Span();
		Span(unsigned int i);
		~Span();
		Span(const Span &copy);
		Span	&operator=(const Span &copy);
		void	addNumber(int val);
		int	shortestSpan(void);
		int	longestSpan(void);
		class TooMuchElement: public std::exception
		{
	  		public:
	    			virtual const char* what() const throw();
		};
	
	private:
		std::vector<int>	_vct;
		unsigned int		_i;

};

#endif
