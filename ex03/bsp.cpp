/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:43:45 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/30 20:52:52 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	area(Point const &p1, Point const &p2, Point const &p3)
{
	float	first_area = roundf(p1.get_x() * (p2.get_x() - p3.get_x()));
	if (first_area < 0)
		first_area = -first_area;
	float	second_area = roundf(p2.get_x() * (p1.get_x() - p3.get_x()));
	if (second_area < 0)
		second_area = -second_area;
	float	third_area = roundf(p3.get_x() * (p1.get_x() - p2.get_x()));
	if (third_area < 0)
		third_area = -third_area;
	return (first_area + second_area + third_area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	ABC;
	float	PAB;
	float	PAC;
	float	PBC;

	ABC = area(a, b, c);
	PAB = area(point, a, b);
	PAC = area(point, a, c);
	PBC = area(point, b, c);
	return (ABC == (PAB + PAC + PBC));
}
