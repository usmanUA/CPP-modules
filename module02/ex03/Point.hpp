/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:40:45 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/08 10:50:44 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const	Fixed	x;
		const	Fixed	y;

	public:
		Point(void);
		~Point(void);
		Point(const float a, const float b);
		Point(const Point&);
		Point&	operator=(const Point&);
		bool	operator==(const Point&) const;

		Fixed	getFixedX(void)	const;
		Fixed	getFixedY(void)	const;
};
# endif
