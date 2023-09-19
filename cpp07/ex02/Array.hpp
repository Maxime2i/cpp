/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:05:18 by mlangloi          #+#    #+#             */
/*   Updated: 2023/09/19 14:05:20 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template<typename T>
class Array
{
	public:
		Array() : _array(new T()), _size(0) {};
		~Array() {delete [] _array;};
		Array(unsigned int n) : _array(new T[n]), _size(n) {};
		Array(Array const &copy)
		{
		for (unsigned int i = 0; i < _size; i++)
			this->_array[i] = copy->_array[i];
		}
		Array &operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				delete [] _array;
				_array = new T[rhs._size];
				_size = rhs._size;
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		}
		T &operator[](unsigned int i) const 
		{
			if (i >= _size)
				throw IndexOutOfBounds();
			return (_array[i]);
		}
		class IndexOutOfBounds : public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return "Index is out of bounds";
				}
		};
		unsigned int	size() {return _size;};
	
	private:
		T	*_array;
		unsigned int	_size;

};

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		out << array[i] << " ";
	return out;
} 

#endif
