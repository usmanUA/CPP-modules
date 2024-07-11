/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:48:41 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/08 11:49:41 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

float	area(Point const a, Point const b, Point const c)
{
	Fixed	ax = a.getFixedX();
	Fixed	ay = a.getFixedY();
	Fixed	bx = b.getFixedX();
	Fixed	by = b.getFixedY();
	Fixed	cx = c.getFixedX();
	Fixed	cy = c.getFixedY();

	Fixed	area((ax * (by - cy) + bx * (cy - ay) + cx *(ay - by)) / 2.0f);
	if (area.toFloat() < 0)
		return (area.toFloat() * -1);
	return (area.toFloat());
};

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		return (false);
	float triangle_area = area(a, b, c);
	float area1 = area(a, b, point);
	float area2 = area(a, c, point);
	float area3 = area(b, c, point);
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return (false);
	if (area1 + area2 + area3 != triangle_area)
		return (false);
	return (true);
};
