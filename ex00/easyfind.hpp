/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:17:05 by luciama2          #+#    #+#             */
/*   Updated: 2025/03/29 14:11:10 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NotFoundException : public std::exception {
	private:
	public:
		NotFoundException(void);
		const char *what() const throw();
} ;

//we must assume T is a container of ints
template<typename T>
typename T::iterator easyfind(T &container, int nbr)
{
	if (container.empty())
		throw NotFoundException();
	typename T::iterator iter = std::find(container.begin(), container.end(), nbr);
	if (iter == container.end())
		throw NotFoundException();
	return iter;
}

#endif