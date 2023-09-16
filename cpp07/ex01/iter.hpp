/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:52:52 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/16 18:52:53 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>

template<typename A, typename B, typename C>
void	iter(A tab, B size, C ft)
{
	for (B i = 0; i < size; i++)
		ft(tab[i]);
}

#endif
