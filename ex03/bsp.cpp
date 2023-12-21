/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:59:11 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/21 20:56:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const d1 = (b.getX() - a.getX()) * (point.getY() - a.getY()) -
					 (b.getY() - a.getY()) * (point.getX() - a.getX());
	Fixed const d2 = (c.getX() - b.getX()) * (point.getY() - b.getY()) -
					 (c.getY() - b.getY()) * (point.getX() - b.getX());
	Fixed const d3 = (a.getX() - c.getX()) * (point.getY() - c.getY()) -
					 (a.getY() - c.getY()) * (point.getX() - c.getX());

	return ((d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0));
}
