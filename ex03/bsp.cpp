/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:43:45 by yosherau          #+#    #+#             */
/*   Updated: 2025/10/01 12:43:33 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	area(Point const &p1, Point const &p2, Point const &p3)
{
	float	first_area = p1.get_x() * (p2.get_y() - p3.get_y());
	float	second_area = p2.get_x() * (p1.get_y() - p3.get_y());
	float	third_area = p3.get_x() * (p1.get_y() - p2.get_y());
	float	sum = first_area + second_area + third_area;
	if (sum < 0)
		sum = -sum;
	sum = 0.5f * sum;
	return (sum);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	ABC;
	float	ABP;
	float	APC;
	float	PBC;

	ABC = area(a, b, c);
	ABP = area(a, b, point);
	APC = area(a, point, c);
	PBC = area(point, b, c);
	return (ABC == (ABP + APC + PBC));
}
