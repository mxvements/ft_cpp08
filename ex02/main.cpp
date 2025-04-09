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
# include <list>

int main(void)
{	
	/* as a stack */
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

	std::cout << std::endl;

	/* as a list */
	std::list<int> l;
	l.push_front(4);
	l.push_front(12);
	l.push_front(1);
	std::cout << "TOP: " << l.front() << std::endl;
	std::cout << "SIZE: " << l.size() << std::endl;
	l.pop_front();
	std::cout << "SIZE: " << l.size() << std::endl;
	l.push_front(42);
	l.push_front(0);
	std::cout << "SIZE: " << l.size() << std::endl;
	std::list<int>::iterator l_start = l.begin();
	std::list<int>::iterator l_end = l.end();
	++l_start;
	--l_start;
	while (l_start != l_end)
	{
		std::cout << *l_start << std::endl;
		++l_start;
	}
	return (0);
}