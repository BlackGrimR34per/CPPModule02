/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:05:51 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/30 18:27:02 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	const Fixed	x;
	const Fixed	y;

	public:
		Point();
		Point(float x, float y);
		Point(const Point &original);
		Point &operator=(const Point &original);
		~Point();
		float	get_x(void) const;
		float	get_y(void) const;
};