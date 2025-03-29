/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:17:11 by luciama2          #+#    #+#             */
/*   Updated: 2025/03/29 15:27:11 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

/* ************************************************************************** */

NotFoundException::NotFoundException(void) { }
const char *NotFoundException::what() const throw()
{
	return "Not Found";
}
/* ************************************************************************** */

int main(void)
{
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(5);
	std::vector<int> v;
	v.push_back(2);
	v.push_back(5);
	try {
		std::list<int>::iterator list_i = easyfind< std::list<int> >(l, 2);
		std::cout << "Found in list : " << *list_i << std::endl;
		std::list<int>::iterator list_ii = easyfind< std::list<int> >(l, 4);
		std::cout << "Not found in list: " << *list_ii << std::endl;
	} catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
		try {
		std::vector<int>::iterator vector_i = easyfind< std::vector<int> >(v, 2);
		std::cout << "Found in vector : " << *vector_i << std::endl;
		std::vector<int>::iterator vector_ii = easyfind< std::vector<int> >(v, 4);
		std::cout << "Not found in vector : " << *vector_ii << std::endl;
	} catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
