/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:37:52 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/18 14:52:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::FRACTIONAL_BITS = 8;

Fixed::Fixed(void) : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed(int const point) : rawBits(point << Fixed::FRACTIONAL_BITS)
{
	std::cout << "Int constructor called" << std::endl;

	return;
}

Fixed::Fixed(float const point)
	: rawBits(roundf(point * (1 << Fixed::FRACTIONAL_BITS)))
{
	std::cout << "Float constructor called" << std::endl;

	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->rawBits = rhs.getRawBits();

	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->rawBits;
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
