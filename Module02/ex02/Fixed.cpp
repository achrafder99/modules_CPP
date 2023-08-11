/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:33:25 by adardour          #+#    #+#             */
/*   Updated: 2023/08/05 16:00:22 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FRACTIONAL = 8;

Fixed::Fixed() : fixed_point(0)
{
}

Fixed::~Fixed()
{
} 

Fixed::Fixed(const Fixed &copied)
{

    this->fixed_point = copied.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& another_object)
{
    if (this == &another_object)
        return (*this);
    this->fixed_point = another_object.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

Fixed::Fixed(const int int_number): fixed_point(int_number << FRACTIONAL)
{
}
Fixed::Fixed(const float float_number): fixed_point(roundf(float_number * (1 << FRACTIONAL)))
{
}
int Fixed::toInt(void) const
{
    return (this->fixed_point >> FRACTIONAL);
}
float Fixed::toFloat(void) const
{
    return (static_cast<float>(fixed_point) / (1 << FRACTIONAL));
}

std::ostream & operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

// Operators overloading
bool Fixed::operator>(const Fixed &fixed)
{
	return (this->toFloat() > fixed.toFloat());
}
bool Fixed::operator<(const Fixed &fixed)
{
	return (this->toFloat() < fixed.toFloat());
}
bool Fixed::operator>=(const Fixed &fixed)
{
	return (this->toFloat() >= fixed.toFloat());
}
bool Fixed::operator<=(const Fixed &fixed)
{
	return (this->toFloat() <= fixed.toFloat());
}
bool Fixed::operator==(const Fixed &fixed)
{
	return (this->toFloat() == fixed.toFloat());
}
bool Fixed::operator!=(const Fixed &fixed)
{
	return (this->toFloat() != fixed.toFloat());
}

float Fixed::operator+(const Fixed &fixed)
{
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(const Fixed &fixed)
{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(const Fixed &fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/(const Fixed &fixed)
{
	return (this->toFloat() / fixed.toFloat());
}


const Fixed& Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1.toFloat() > ref2.toFloat())
	{
		return (ref2);
	}
	return ref1;
}
Fixed& Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1.toFloat() < ref2.toFloat())
	{
		return (ref2);
	}
	return ref1;
}
const Fixed& Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1.toFloat() < ref2.toFloat())
	{
		return (ref2);
	}
	return ref1;
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);
	this->fixed_point++;
	return (old);
}
Fixed &Fixed::operator++(void)
{
	++this->fixed_point;
	return (*this);
}
Fixed &Fixed::operator--(int)
{
	--this->fixed_point;
	return (*this);
}
Fixed Fixed::operator--(void)
{
	Fixed old(*this);
	this->fixed_point--;
	return (old);
}