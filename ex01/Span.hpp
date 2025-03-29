/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 14:30:10 by luciama2          #+#    #+#             */
/*   Updated: 2025/03/29 18:48:54 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<int> 	_array;
		const unsigned int	_N;
	public:
		~Span();
		Span(unsigned int N);
		Span(const Span &src);
		Span &operator=(const Span &src);
		
		void addNumber(int nbr);
		int shortestSpan() const; //min difference between numbers
		int longestSpan() const; //max difference between numbers with min and max numbers
		
		template<typename I>
		void fillNumbers(const I &start, const I &end)
		{
			for (I iter = start; iter != end; iter++)
			{
				this->addNumber(*iter);
			}
		} 

		class NoSpaceException : public std::exception
		{
			public:
				const char *what() const throw();
		} ;

		class NotEnoughNumbersException : public std::exception
		{
			public:
				const char *what() const throw();
		};

} ;

#endif