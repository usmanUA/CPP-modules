/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:37:45 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/06 23:39:17 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_number = 0;
};

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed& from)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_number = from.getRawBits();
};

Fixed&	Fixed::operator=(const Fixed& from)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &from)
		this->fixed_point_number = from.getRawBits();
	return (*this);
};

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
};

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_number = raw;
};
