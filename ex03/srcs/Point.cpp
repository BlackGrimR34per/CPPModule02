/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:05:45 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/19 15:08:38 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(void):
	x(0), y(0)
{
	// std::cout << "Point's default constructor called" << std::endl;
}

Point::Point(float x, float y):
	x(x), y(y)
{
	// std::cout << "Point's parameterized constructor called" << std::endl;
}

Point::Point(const Point &original):
	x(original.x), y(original.y)
{
	// std::cout << "Point's copy constructor called" << std::endl;
}

Point	&Point::operator=(const Point &original)
{
	if (this == &original)
		return (*this);
	return (*this);
}

Point::~Point(void)
{
	// std::cout << "Point's destructor called" << std::endl;
}

float	Point::get_x(void) const
{
	return (this->x.toFloat());
}

float	Point::get_y(void) const
{
	return (this->y.toFloat());
}