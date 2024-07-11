/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:27:49 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/06 23:37:36 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	fixed_point_number;
		static	const	int	fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed& operator=(const Fixed&);

		int	getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
