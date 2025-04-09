/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:54:52 by luciama2          #+#    #+#             */
/*   Updated: 2025/03/29 20:30:43 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

/**
 * template<
    	class T,
    	class Container = std::deque<T>
	> class stack;
 */
template<typename T>
class MutantStack : public std::stack<T> 
{
	public:
		//canonical form functions
		~MutantStack(void);
		MutantStack(void);
		MutantStack(const MutantStack &src);
		MutantStack &operator=(const MutantStack &src);
		
		/**
		 * Iterator Type: The iterator type is defined as typename 
		 * std::stack<T>::container_type::iterator because the iterator for 
		 * std::stack comes from the underlying container (which is typically 
		 * std::deque<T> or std::vector<T>).
		 * 
		 * iterator type must use the underlying container
		 */
		//member type
		typedef typename std::stack<T>::container_type::iterator iterator;
		//member functions
		iterator begin(void);
		iterator end(void);
} ;


# include "MutantStack.tpp"


#endif