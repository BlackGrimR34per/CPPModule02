/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 23:45:26 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/30 00:12:52 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	int					_fixedPointValue;
	static int const	_numFractionalBits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &original);
		Fixed(const int integer);
		Fixed(const float floatValue);
		Fixed 		&operator=(const Fixed &original);
		bool 		operator>(const Fixed &other) const;
		bool 		operator<(const Fixed &other) const;
		bool 		operator>=(const Fixed &other) const;
		bool 		operator<=(const Fixed &other) const;
		bool 		operator==(const Fixed &other) const;
		bool 		operator!=(const Fixed &other) const;
		Fixed		operator+(const Fixed &other) const;
		Fixed		operator-(const Fixed &other) const;
		Fixed		operator*(const Fixed &other) const;
		Fixed		operator/(const Fixed &other) const;
		Fixed		&operator++(void);
		Fixed		operator++(int);
		Fixed		&operator--(void);
		Fixed		operator--(int);
		static Fixed		&min(Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static Fixed		&max(Fixed &first, Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);
		int 		getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif