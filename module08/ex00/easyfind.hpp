/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:14:08 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/21 11:20:26 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
template<typename T>
bool	easyfind( T& container, int findMe )
{
	if (std::find(container.begin(), container.end(), findMe) != container.end())
		return true;
	return false;
};

#endif
