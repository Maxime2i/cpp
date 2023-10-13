/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:00:10 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/30 14:00:11 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::~PmergeMe()
{}

PmergeMe::PmergeMe(PmergeMe const &other)
{
	(void)other;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &other)
{
	*this = other;
	return *this;
}

unsigned int PmergeMe::stou(std::string const &str)
{
	unsigned int num;
	std::stringstream ss(str);
	ss >> num;
	return (num);
}

void	PmergeMe::printVector(std::vector<unsigned int> &vect)
{
	std::vector<unsigned int>::iterator ite = vect.end();
	for (std::vector<unsigned int>::iterator it = vect.begin(); it < ite; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

std::vector<unsigned int> PmergeMe::mergeVecs(std::vector<unsigned int> &left, std::vector<unsigned int> &right)
{
	std::vector<unsigned int> result;
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		result.push_back(right.front());
		right.erase(right.begin());
	}
	return result;
}


std::vector<unsigned int> PmergeMe::mergeInsertVec(std::vector<unsigned int> &vect)
{
	if (vect.size() <= 1)
	{
		return vect;
	}
	int mid = vect.size() / 2;
	std::vector<unsigned int> left(vect.begin(), vect.begin() + mid);
	std::vector<unsigned int> right(vect.begin() + mid, vect.end());
	left = mergeInsertVec(left);
	right = mergeInsertVec(right);
	return mergeVecs(left, right);
}

void PmergeMe::sortVector(int ac, char **av)
{
	std::vector<unsigned int>	vect;
	for (int i = 1; i < ac; i++)
		vect.push_back(stou(av[i]));
	std::cout << "Before: ";
	printVector(vect);
	std::clock_t start = std::clock();
	vect = mergeInsertVec(vect);
	double time_taken = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
	std::cout << "After: ";
	printVector(vect);
	std::cout << "Time to process a range of " << vect.size() << " elements with std::vector : "<< time_taken << " µs" << std::endl;
}










std::list<unsigned int> PmergeMe::mergeList(std::list<unsigned int> &left, std::list<unsigned int> &right)
{
	std::list<unsigned int> result;
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		result.push_back(right.front());
		right.erase(right.begin());
	}
	return result;
}


std::list<unsigned int> PmergeMe::mergeInsertList(std::list<unsigned int> &list)
{
	if (list.size() <= 1)
	{
		return list;
	}
	int mid = list.size() / 2;
	std::list<unsigned int> left;
	std::list<unsigned int> right;
	for (int i = 0; i < mid; i++)
	{
		left.push_back(list.front());
		list.pop_front();
	}
	right = list;
	left = mergeInsertList(left);
	right = mergeInsertList(right);
	return mergeList(left, right);
}


void PmergeMe::sortList(int ac, char **av)
{
	std::list<unsigned int>	list;
	for (int i = 1; i < ac; i++)
		list.push_back(stou(av[i]));
	std::clock_t start = std::clock();
	list = mergeInsertList(list);
	double time_taken = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
	std::cout << "Time to process a range of " << list.size() << " elements with std::list : "<< time_taken << " µs" << std::endl;
}
