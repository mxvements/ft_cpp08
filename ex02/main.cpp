/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:54:57 by luciama2          #+#    #+#             */
/*   Updated: 2025/03/29 20:26:12 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> s;
	s.push(4);
	s.push(12);
	s.push(1);
	std::cout << "TOP: " << s.top() << std::endl;
	std::cout << "SIZE: " << s.size() << std::endl;
	s.pop();
	std::cout << "SIZE: " << s.size() << std::endl;
	s.push(42);
	s.push(0);
	std::cout << "SIZE: " << s.size() << std::endl;
	MutantStack<int>::iterator start = s.begin();
	MutantStack<int>::iterator end = s.end();
	++start;
	--start;
	while (start != end)
	{
		std::cout << *start << std::endl;
		++start;
	}
	return (0);
}