/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:09:19 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/16 19:09:20 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include <list>
#include <deque>
#include <vector>
#include <algorithm>

class error : public std::exception
{
	public:
		virtual const char *what()const throw ()
		{return ("Error : value not found");}
};

template<typename T>
typename T::iterator	easyfind(T &val, int i)
{
	typename T::iterator it;
	it = find(val.begin(), val.end(), i);
	if (it == val.end())
		throw(error());
	return (it);
}

#endif
