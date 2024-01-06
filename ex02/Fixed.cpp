/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:37:52 by abenamar          #+#    #+#             */
/*   Updated: 2024/01/06 16:17:03 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::FRACTIONAL_BITS = 8;

Fixed::Fixed(void) : rawBits(0)
{
	return;
}

Fixed::Fixed(int const point) : rawBits(point << Fixed::FRACTIONAL_BITS)
{
	return;
}

Fixed::Fixed(float const point)
	: rawBits(roundf(point * (1 << Fixed::FRACTIONAL_BITS)))
{
	return;
}

Fixed::Fixed(Fixed const &src) : rawBits(src.rawBits)
{
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->rawBits = rhs.rawBits;

	return *this;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return this->rawBits > rhs.rawBits;
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return rhs > *this;
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return !(*this < rhs);
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return !(*this > rhs);
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return this->rawBits == rhs.rawBits;
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return !(*this == rhs);
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed res;

	res.rawBits = this->rawBits + rhs.rawBits;

	return res;
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed res;

	res.rawBits = this->rawBits - rhs.rawBits;

	return res;
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++(void)
{
	++this->rawBits;

	return *this;
}

Fixed &Fixed::operator--(void)
{
	--this->rawBits;

	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed prev(*this);

	++*this;

	return prev;
}

Fixed Fixed::operator--(int)
{
	Fixed prev(*this);

	--*this;

	return prev;
}

Fixed const &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return Fixed::min(const_cast<Fixed const &>(lhs), rhs);
}

Fixed const &Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	return lhs > rhs ? rhs : lhs;
}

Fixed const &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return Fixed::max(const_cast<Fixed const &>(lhs), rhs);
}

Fixed const &Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	return rhs > lhs ? rhs : lhs;
}

int Fixed::getRawBits(void) const
{
	return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;

	return;
}

float Fixed::toFloat(void) const
{
	return this->rawBits / static_cast<float>(1 << Fixed::FRACTIONAL_BITS);
}

int Fixed::toInt(void) const
{
	return this->rawBits >> Fixed::FRACTIONAL_BITS;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();

	return o;
}
