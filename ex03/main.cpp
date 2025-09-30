/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:28:10 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/30 20:31:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point first(1, 1);
	Point second(6, 6);
	Point third(1, 5);
	Point plo(2, 1);
	bool output = bsp(first, second, third, plo);
	if (output == 1)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}
