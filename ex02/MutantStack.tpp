/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:24:08 by luciama2          #+#    #+#             */
/*   Updated: 2025/03/29 20:25:06 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::~MutantStack(void){};

template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &src)
{
	*this = src;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &src)
{
	if (this != &src) {}
	return (*this);
}

//the iterator typename refers to the typename defined inside the class
// 'c' is the container from the base class std::stack
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void){
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void){
	return (this->c.end());
}
