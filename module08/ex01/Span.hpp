/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:40:31 by adardour          #+#    #+#             */
/*   Updated: 2023/09/22 17:23:26 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <limits>
#include <iostream>
#include <climits>
#include <iostream>


class Span
{
    private:
        std::vector<int> numbers;
    public:
        Span(unsigned int N);
        ~Span();
        unsigned int get_Size();
        void addNumber(int number);
        void    print();
        void    sort();
        int    shortestSpan();
        int    longestSpan();
        std::vector<int> &getVector();
};

#endif