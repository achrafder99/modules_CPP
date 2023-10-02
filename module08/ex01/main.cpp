/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:54:18 by adardour          #+#    #+#             */
/*   Updated: 2023/09/22 17:39:43 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdio.h>
#include <cstdlib>
#include <ctime>

void    fill(Span &span, unsigned int size)
{
    int i;
    i = 0;
    while (i < size)
    {
        span.getVector().push_back(std::rand() % 1000);
        i++;
    }
}

int main()
{
    try
    {
        unsigned int size = 5;
        Span sp = Span(size);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        // fill(sp,size);
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
}