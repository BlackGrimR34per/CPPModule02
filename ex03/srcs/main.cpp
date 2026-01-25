/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:28:10 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/25 15:24:32 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point first(0, 0);
	Point second(4, 0);
	Point third(2, 4);
	Point point(3, 0);
	bool output = bsp(first, second, third, point);
	std::cout << output << std::endl;
}
