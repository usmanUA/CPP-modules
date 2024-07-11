/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:43:03 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/08 10:56:18 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

// Constructors
Point::Point(void): x(Fixed(0)), y(Fixed(0))
{
};

Point::~Point(void)
{
};

Point::Point(const float a, const float b): x(Fixed(a)), y(Fixed(b))
{
};

// Copy Constructor
Point::Point(const Point& from): x(Fixed(from.x)), y(Fixed(from.y))
{
};

// Copy Assignment Operator Overload
Point&	Point::operator=(const Point&)
{
	return (*this);
};

// == operator overload
bool	Point::operator==(const Point& other) const
{
	if (this->x == other.x && this->y == other.y)
		return (true);
	return (false);
};

// Member functions
Fixed	Point::getFixedX(void) const
{
	return (this->x);
};

Fixed	Point::getFixedY(void) const
{
	return (this->y);
};
