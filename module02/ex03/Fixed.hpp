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
# include <cmath>

class	Fixed
{
	private:
		int	fixed_point_number;
		static	const	int	fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed&);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed(void);
		Fixed& operator=(const Fixed&);

		bool operator>(const Fixed&) const;
		bool operator<(const Fixed&) const;
		bool operator>=(const Fixed&) const;
		bool operator<=(const Fixed&) const;
		bool operator==(const Fixed&) const;
		bool operator!=(const Fixed&) const;

		Fixed operator+(const Fixed&) const;
		Fixed operator-(const Fixed&) const;
		Fixed operator/(const Fixed&) const;
		Fixed operator*(const Fixed&) const;

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		static	Fixed& min(Fixed&, Fixed&);
		static	const	Fixed& min(const Fixed&, const Fixed&);
		static	Fixed& max(Fixed&, Fixed&);
		static	const	Fixed& max(const Fixed&, const Fixed&);

		int	getRawBits(void) const;
		void	setRawBits(const int raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<( std::ostream& out, const Fixed& );

#endif
