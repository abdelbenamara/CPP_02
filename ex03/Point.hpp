/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:39:15 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/22 15:36:24 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>
#include "Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(float const xf, float const yf);
	Point(Point const &src);
	~Point(void);

	Point &operator=(Point const &rhs);

	Fixed const &getX(void) const;
	Fixed const &getY(void) const;

private:
	Fixed const x;
	Fixed const y;
};

std::ostream &operator<<(std::ostream &o, Point const &i);

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
