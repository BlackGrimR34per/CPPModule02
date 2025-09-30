/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 23:49:26 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/30 20:59:20 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():
	_fixedPointValue(0)
{
	std::cout << "Fixed's default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Fixed's copy constructor called" << std::endl;
	this->_fixedPointValue = original.getRawBits();
}

Fixed::Fixed(const int integer)
{
	std::cout << "Fixed's int constructor called" << std::endl;
	this->_fixedPointValue = integer << this->_numFractionalBits;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Fixed's float constructor called" << std::endl;
	this->_fixedPointValue = roundf(floatValue * (1 << this->_numFractionalBits));
}

Fixed &Fixed::operator=(const Fixed &original)
{
	std::cout << "Fixed's copy assignment operator called" << std::endl;
	if (this != &original)
		this->_fixedPointValue = original.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->_fixedPointValue < other._fixedPointValue);
}

// !(*this < other)
bool Fixed::operator>=(const Fixed &other) const
{
	return (this->_fixedPointValue >= other._fixedPointValue);
}

// !(*this > other)
bool Fixed::operator<=(const Fixed &other) const
{
	return (this->_fixedPointValue <= other._fixedPointValue);
}

// (!(*this > other) && !(*this < other))
bool Fixed::operator==(const Fixed &other) const
{
	return (this->_fixedPointValue == other._fixedPointValue);
}

// (!(*this == other))
bool Fixed::operator!=(const Fixed &other) const
{
	return (this->_fixedPointValue != other._fixedPointValue);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->_fixedPointValue++;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->_fixedPointValue--;
	return (temp);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first > second)
		return (second);
	return (first);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first > second)
		return (second);
	return (first);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first > second)
		return (first);
	return (second);
}

Fixed::~Fixed()
{
	std::cout << "Fixed's destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_fixedPointValue / (1 << this->_numFractionalBits);
}

int		Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_numFractionalBits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}