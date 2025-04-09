/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 14:30:08 by luciama2          #+#    #+#             */
/*   Updated: 2025/03/29 18:42:02 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span(void) {};

Span::Span(unsigned int N) : _N(N) {};

Span::Span(const Span &src) : _N(src._N)
{
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		for (unsigned int i = 0; i < src._N; i++)
			this->_array[i] = src._array[i];
	}
	return (*this);
}

const char *Span::NoSpaceException::what() const throw()
{
	return "Error : Dynamic array already full";
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return "Error : No enough numbers in the dynamic array for the calculation";
}

void Span::addNumber(int nbr)
{
	if (this->_array.size() > this->_N - 1)
		throw Span::NoSpaceException();
	this->_array.push_back(nbr);
}

int Span::shortestSpan() const
{
	if (this->_array.size() < 2)
		throw Span::NotEnoughNumbersException();
	std::vector<int> sorted = this->_array;
	std::sort(sorted.begin(), sorted.end());
	int i = 0;
	int j = sorted.size() - 1;
	int minSpan = std::abs(sorted[1] - sorted[0]);
	while (i < j)
	{
		int lhs = std::abs(sorted[i + 1] - sorted[i]);
		int rhs = std::abs(sorted[j - 1] - sorted[j]);
		if (lhs < minSpan)
			minSpan = lhs;
		if (rhs < minSpan)
			minSpan = rhs;
		j--;
		i++;
	}
	return (minSpan);
}

int Span::longestSpan() const
{
	if (this->_array.size() < 2)
		throw Span::NotEnoughNumbersException();
 	std::vector<int>::const_iterator min = std::min_element(this->_array.begin(), this->_array.end());
 	std::vector<int>::const_iterator max = std::max_element(this->_array.begin(), this->_array.end());
	return (*max - *min);
}


