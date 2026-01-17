/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 23:45:26 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 15:41:59 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	int					_fixedPointValue;
	static int const	_numFractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &original);
		Fixed &operator=(const Fixed &original);
		~Fixed();
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif