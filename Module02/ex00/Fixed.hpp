/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:33:32 by adardour          #+#    #+#             */
/*   Updated: 2023/08/04 14:00:18 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream> 

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
        int getRawBits(void) const;
        void setRawBits(int const raw); 
};

#endif