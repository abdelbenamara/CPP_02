/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:35:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 16:21:02 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <cmath>
#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(int const point);
	Fixed(float const point);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed &operator=(Fixed const &rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	static int const FRACTIONAL_BITS;

	int rawBits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif
