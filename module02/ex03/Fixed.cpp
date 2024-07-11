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
//	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_number = 0;
};

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed& from)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_number = from.fixed_point_number;
};

Fixed::Fixed(const int val)
{
//	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_number = val << this->fractional_bits;
};

Fixed::Fixed(const float val)
{
//	std::cout << "Float constructor called\n";
	this->fixed_point_number = roundf(val * (1 << this->fractional_bits));
};

Fixed&	Fixed::operator=(const Fixed& from)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &from)
		this->fixed_point_number = from.fixed_point_number;
	return (*this);
};

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->fixed_point_number > other.fixed_point_number);
};

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->fixed_point_number < other.fixed_point_number);
};

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->fixed_point_number >= other.fixed_point_number);
};

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->fixed_point_number <= other.fixed_point_number);
};

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->fixed_point_number == other.fixed_point_number);
};

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->fixed_point_number != other.fixed_point_number);
};

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result;

	result.setRawBits(this->fixed_point_number + other.fixed_point_number);
	return (result);
};

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result;

	result.setRawBits(this->fixed_point_number - other.fixed_point_number);
	return (result);
};

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed	result(this->toFloat() / other.toFloat());
	return (result);
};

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed	result(this->toFloat() * other.toFloat());
	return (result);
};

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++this->fixed_point_number;
	return (temp);
};

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--this->fixed_point_number;
	return (temp);
};

Fixed&	Fixed::operator++(void)
{
	++this->fixed_point_number;
	return (*this);
};

Fixed&	Fixed::operator--(void)
{
	--this->fixed_point_number;
	return (*this);
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
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
};

void	Fixed::setRawBits(const int raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_number = raw;
};

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a.fixed_point_number < b.fixed_point_number ? a:b);
};

const	Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a.fixed_point_number < b.fixed_point_number ? a:b);
};

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a.fixed_point_number > b.fixed_point_number ? a:b);
};

const	Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a.fixed_point_number > b.fixed_point_number ? a:b);
};
