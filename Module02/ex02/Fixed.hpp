/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:33:32 by adardour          #+#    #+#             */
/*   Updated: 2023/08/06 14:01:40 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
    private:
        int fixed_point;
        static const int FRACTIONAL;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copied);
        Fixed& operator=(const Fixed& another_object);
        Fixed(const int int_number);
        Fixed(const float float_number);
        float toFloat( void ) const;
        int toInt( void ) const;
		bool operator>(const Fixed &Fixed);
		bool operator<(const Fixed &Fixed);
		bool operator>=(const Fixed &Fixed);
		bool operator<=(const Fixed &Fixed);
		bool operator==(const Fixed &Fixed);
		bool operator!=(const Fixed &Fixed);
		float operator+(const Fixed &Fixed);
		float operator-(const Fixed &Fixed);
		float operator*(const Fixed &other);
		float operator/(const Fixed &Fixed);
		static Fixed& min(Fixed  &ref1,Fixed  &ref2);
		static const Fixed& min(Fixed  const &ref1,Fixed  const &ref2);
		static Fixed& max(Fixed  &ref1,Fixed  &ref2);
		static const Fixed& max(Fixed  const &ref1,Fixed  const &ref2);
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--(int);
		Fixed operator--();
        int getRawBits(void) const;
        void setRawBits(int const raw); 
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif