/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:17:14 by adardour          #+#    #+#             */
/*   Updated: 2023/07/21 15:38:18 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw) 
{
	this->fixed_point = raw;
}

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int integer) : fixed_point(integer << fractional)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_number) : fixed_point(roundf(float_number * (1 << fractional)))
{
	std::cout << "Float constructor called" << std::endl;
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
	std::cout << "Copy constructor called" << std::endl;
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
		std::cout << "Copy assignment operator called " << std::endl;
	}
	return *this;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
