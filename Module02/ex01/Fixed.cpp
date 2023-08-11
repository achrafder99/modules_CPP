/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:33:25 by adardour          #+#    #+#             */
/*   Updated: 2023/08/05 16:36:48 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::FRACTIONAL = 8;

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
} 

Fixed::Fixed(const Fixed &copied)
{
    std::cout << "Copy constructor called" << std::endl;
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = copied.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& another_object)
{
    std::cout << "Copy assignment operator called" << std::endl;
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
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float float_number): fixed_point(roundf(float_number * (1 << FRACTIONAL)))
{
    std::cout << "Float constructor called" << std::endl;
}
int Fixed::toInt(void) const
{
    int scalingFactor = 1 << FRACTIONAL;
    float scaledValue = static_cast<float>(fixed_point / scalingFactor);
    int intValue = static_cast<int>(std::roundf(scaledValue));
    return (intValue);
}
float Fixed::toFloat(void) const
{
    return (static_cast<float>(fixed_point) / (1 << FRACTIONAL));
}

std::ostream & operator << (std::ostream &out, const Fixed &fixed)
{
    std::cout << fixed.toFloat();
    return out;
}