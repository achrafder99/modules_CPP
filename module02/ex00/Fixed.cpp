/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:17:14 by adardour          #+#    #+#             */
/*   Updated: 2023/07/21 14:49:54 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

void	Fixed::setRawBits(int const raw) 
{
	this->fixed_point = raw;
}

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	this->fixed_point = copy.fixed_point;
	std::cout << "\e[0;33mCopy constructor called\e[0m" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->fixed_point = other.getRawBits();
		std::cout << "Copy assignment operator called " << std::endl;
	}
	return *this;
}
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}
