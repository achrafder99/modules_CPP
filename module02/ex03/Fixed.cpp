/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:17:14 by adardour          #+#    #+#             */
/*   Updated: 2023/07/22 11:42:01 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits() const
{
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw) 
{
	this->fixed_point = raw;
}

Fixed::Fixed()
{
	this->fixed_point = 0;
}

Fixed::Fixed(const int integer) : fixed_point(integer << fractional)
{
}

Fixed::Fixed(const float float_number) : fixed_point(roundf(float_number * (1 << fractional)))
{
}

float Fixed::toFloat() const
{
	return (static_cast<float>(fixed_point) / (1 << fractional));
}

int Fixed::toInt() const
{
	return (fixed_point >> fractional);
}

Fixed::Fixed(const Fixed &copy)
{
	this->fixed_point = copy.fixed_point;
}

std::ostream& operator<< (std::ostream& o,  Fixed const &fixed)
{
	std::cout << fixed.toFloat();
	return (o);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->fixed_point = other.fixed_point;
	}
	return *this;
}
Fixed::~Fixed()
{
}

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


Fixed& Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1.toFloat() > ref2.toFloat())
	{
		return (ref2);
	}
	return ref1;
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

Fixed &Fixed::operator++(void)
{
	++this->fixed_point;
	return (*this);
}
Fixed &Fixed::operator++(int)
{
	this->fixed_point++;
	return (*this);
}
Fixed &Fixed::operator--(void)
{
	--this->fixed_point;
	return (*this);
}
Fixed &Fixed::operator--(int)
{
	this->fixed_point--;
	return (*this);
}