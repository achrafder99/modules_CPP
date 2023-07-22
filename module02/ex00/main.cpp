/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:02:33 by adardour          #+#    #+#             */
/*   Updated: 2023/07/20 09:11:11 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
   
   Fixed a;
   Fixed b( a );
   Fixed c;

   c = b;

   std::cout << a.getRawBits() << std::endl;
   std::cout << b.getRawBits() << std::endl;
   std::cout << c.getRawBits() << std::endl;
   
   return 0;
}