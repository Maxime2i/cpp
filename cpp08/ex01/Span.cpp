/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:46:18 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/17 17:46:19 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span()  : _i(0)
{}

Span::Span(unsigned int i) : _i(i)
{}

Span::~Span()
{}

Span::Span(const Span &copy)
{
	this->_i = copy._i;
	this->_vct = copy._vct;
}

Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        this->_vct = copy._vct;
        this->_i = copy._i;
    }
    return (*this);
}

void	Span::addNumber(int val)
{
	try{
		if (this->_vct.size() == this->_i)
			throw TooMuchElement();
		else
			this->_vct.push_back(val);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	Span::shortestSpan(void)
{
	if (_vct.size() < 2)
		return (0);
	std::vector<int> vct = _vct;
	std::sort(vct.begin(), vct.end());
	std::vector<int> differences(vct.size());
	std::adjacent_difference(vct.begin(), vct.end(), differences.begin());
	std::vector<int>::iterator ptr = differences.begin() + 1;
	int min = *ptr;
	for (; ptr != differences.end(); ++ptr)
	{
		if (*ptr < min)
			min = *ptr;
	}
	return (min);
}

int	Span::longestSpan(void)
{
	if (_vct.size() < 2)
		return (0);
	std::sort(_vct.begin(), _vct.end());
	int max = _vct.back() - _vct.front();
	return (max);
}

const char* Span::TooMuchElement::what() const throw()
{
	return ("Too much Element");
}
