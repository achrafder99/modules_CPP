/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:33:25 by adardour          #+#    #+#             */
/*   Updated: 2023/08/04 14:18:39 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}
