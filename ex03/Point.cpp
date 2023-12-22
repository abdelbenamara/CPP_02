/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:43:18 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/22 15:38:15 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	return;
}

Point::Point(float const xf, float const yf) : x(xf), y(yf)
{
	return;
}

Point::Point(Point const &src) : x(src.x), y(src.y)
{
	return;
}

Point::~Point(void)
{
	return;
}

Point &Point::operator=(Point const &rhs)
{
	if (this != &rhs)
	{
		const_cast<Fixed &>(this->x) = rhs.x;
		const_cast<Fixed &>(this->y) = rhs.y;
	}

	return *this;
}

Fixed const &Point::getX(void) const
{
	return this->x;
}

Fixed const &Point::getY(void) const
{
	return this->y;
}

std::ostream &operator<<(std::ostream &o, Point const &i)
{
	o << "(x = " << i.getX() << ", y = " << i.getY() << ")";

	return o;
}
