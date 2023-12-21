/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:35:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/16 13:46:43 by abenamar         ###   ########.fr       */
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
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed const &min(Fixed &lhs, Fixed &rhs);
	static Fixed const &min(Fixed const &lhs, Fixed const &rhs);
	static Fixed const &max(Fixed &lhs, Fixed &rhs);
	static Fixed const &max(Fixed const &lhs, Fixed const &rhs);

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
