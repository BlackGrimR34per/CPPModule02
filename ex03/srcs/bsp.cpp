/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:43:45 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/25 15:22:46 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

static float	area(Point const &p1, Point const &p2, Point const &p3)
{
	float	first_area = p1.get_x() * (p2.get_y() - p3.get_y());
	float	second_area = p2.get_x() * (p3.get_y() - p1.get_y());
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

// static float	cross_product(Point const &p1, Point const &p2, Point const &p3)
// {
// 	return (p2.get_x() - p1.get_x()) * (p3.get_y() - p1.get_y()) - (p2.get_y() - p1.get_y()) * (p3.get_x() - p1.get_x());
// }

// bool bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	const double EPSILON = 1e-9;

// 	float	first_area = cross_product(a, b, point);
// 	float	second_area = cross_product(b, c, point);
// 	float	third_area = cross_product(c, a, point);
// 	float	temp_first_area = first_area;
// 	float	temp_double_area = second_area;
// 	float	temp_third_area = third_area;

// 	if (first_area < 0)
// 		temp_first_area = -first_area;
// 	if (second_area < 0)
// 		temp_double_area = -second_area;
// 	if (third_area < 0)
// 		temp_third_area = -third_area;
// 	if (temp_first_area < EPSILON || temp_double_area < EPSILON || temp_third_area < EPSILON)
// 		return (true);

// 	bool all_positive = (first_area > 0) && (second_area > 0) && (third_area > 0);
// 	bool all_negative = (first_area < 0) && (second_area < 0) && (third_area < 0);

//     return (all_positive || all_negative);
// }
