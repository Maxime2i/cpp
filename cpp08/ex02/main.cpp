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

#include"MutantStack.hpp"
#include<iterator>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::it it = mstack.begin();
	MutantStack<int>::it ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	.
	std::cout << std::endl;
	
	std::list<int> ls;
	ls.push_back(5);
	ls.push_back(17);
	std::cout << ls.back() << std::endl;
	ls.pop_back();
	std::cout << ls.size() << std::endl;
	ls.push_back(3);
	ls.push_back(5);
	ls.push_back(737);
	//[...]
	ls.push_back(0);
	std::list<int>::iterator itr = ls.begin();
	std::list<int>::iterator iter = ls.end();
	++itr;
	--itr;
	while (itr != iter)
	{
		std::cout << *itr << std::endl;
		++itr;
	}
	std::list<int> s2(ls);
	
	return 0;
}
