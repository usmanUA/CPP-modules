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
# include <ostream>

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
	if (this != &from)
		*this = from;
};

Fixed&	Fixed::operator=(const Fixed& from)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &from)
		this->fixed_point_number = from.fixed_point_number;
	return (*this);
};

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_number = val << this->fractional_bits;
};

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called\n";
	this->fixed_point_number = roundf(val * (1 << this->fractional_bits));
};


std::ostream& operator<<(std::ostream& out, const Fixed& from)
{
	out << from.toFloat();
	return (out);
};

float	Fixed::toFloat(void) const
{
	return ((float)this->fixed_point_number / (1 << this->fractional_bits));
};

int	Fixed::toInt(void) const
{
	return (this->fixed_point_number >> this->fractional_bits);
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
