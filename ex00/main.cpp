/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:17:11 by luciama2          #+#    #+#             */
/*   Updated: 2025/03/28 20:48:26 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

/* ************************************************************************** */

NotFoundException::NotFoundException(void) { }
const char *NotFoundException::what() const throw()
{
	return "Not Found";
}
/* ************************************************************************** */

int main(void)
{
	std::list<int> nbrs;
	nbrs.push_back(1);
	nbrs.push_back(2);
	nbrs.push_back(3);
	nbrs.push_back(5);
	try {
		std::list<int>::iterator i = easyfind< std::list<int> >(nbrs, 2);
		std::cout << "Found : " << *i << std::endl;
		std::list<int>::iterator ii = easyfind< std::list<int> >(nbrs, 4);
		std::cout << "Not found : " << *ii << std::endl;
	} catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
