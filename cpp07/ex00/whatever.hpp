/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:33:19 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/16 18:33:20 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include<iostream>

template<typename A>
void	swap(A &val1, A &val2)
{
	A swap;
	swap = val1;
	val1 = val2;
	val2 = swap;
}

template<typename A>
A	min(A val1, A val2)
{
	if (val1 < val2)
		return (val1);
	return val2;
}

template<typename A>
A	max(A val1, A val2)
{
	if (val1 > val2)
		return (val1);
	return val2;
}

#endif
