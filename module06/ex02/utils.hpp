/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:18:20 by adardour          #+#    #+#             */
/*   Updated: 2023/09/21 16:57:15 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "Base.hpp"
#include <cstdlib>
#include <stdio.h>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

enum Classes
{
    class_A,
    class_B,
    class_C,
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif