/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:00:05 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/30 14:00:07 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include<vector>
#include<sstream>
#include<ctime>
#include<list>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const &other);
		PmergeMe &operator=(PmergeMe const &other);
		
		unsigned int stou(std::string const &str);
		void	printVector(std::vector<unsigned int> &vect);
		std::vector<unsigned int> mergeInsertVec(std::vector<unsigned int> &vect);
		std::vector<unsigned int> mergeVecs(std::vector<unsigned int> &left, std::vector<unsigned int> &right);
		void sortVector(int ac, char **av);
		
		std::list<unsigned int> mergeList(std::list<unsigned int> &left, std::list<unsigned int> &right);
		std::list<unsigned int> mergeInsertList(std::list<unsigned int> &list);
		void sortList(int ac, char **av);
};

#endif
