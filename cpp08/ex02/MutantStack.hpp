/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:33:58 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/19 19:34:01 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include <list>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		virtual ~MutantStack() {};
		MutantStack(MutantStack const &copy) : std::stack<T>(copy) {};
		MutantStack &operator=(MutantStack const &rhs) {this->c = rhs.c; return *this;};
		typedef typename std::stack<T>::container_type::iterator it;
		it begin() {return this->c.begin();};
		it end() {return this->c.end();};
};

#endif
