/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:49:23 by adardour          #+#    #+#             */
/*   Updated: 2023/09/22 17:23:37 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
    numbers.reserve(N);
}

Span::~Span()
{
    
}

unsigned int Span::get_Size()
{
    return this->numbers.size();
}

void    Span::addNumber(int number)
{    
    std::vector<int>::iterator it = std::find(numbers.begin(), numbers.end(), number);
    if (it != numbers.end()) {
        throw std::runtime_error("Value already exist ");
    } else {
            numbers.push_back(number);
    }
}

void    Span::print()
{
    int i = 0;
    while (i < numbers.size())
    {
        std::cout << numbers[i] << std::endl;
        i++;
    }
    
}

void    Span::sort()
{
    std::sort(numbers.begin(),numbers.end());
}

int    Span::shortestSpan()
{
    int min_span = 2147483647;
    if (numbers.size() == 0 || numbers.size() == 1)
    {
        throw std::runtime_error("Enter some number");
    }
    Span::sort();
    std::vector<int>::iterator begin = numbers.begin();
    std::vector<int>::iterator second = numbers.begin() + 1;

    while (second != numbers.end())
    {
        if ((*second - *begin) < min_span)
            min_span = (*second - *begin);
        second++;
        begin++;
    }
    return (min_span);
}

int Span::longestSpan()
{
    int max_span = INT_MIN;
    if (numbers.size() == 0 || numbers.size() == 1)
    {
        throw std::runtime_error("Enter some number");
    }
    Span::sort();
    // Span::print();
    std::vector<int>::iterator begin = numbers.begin();
    std::vector<int>::iterator first = numbers.begin();
    std::vector<int>::iterator end_ = numbers.end();

    while (begin != numbers.end())
    {
        end_ = begin;
        begin++;
    }
    return (*end_ - *first);

}

std::vector<int> &Span::getVector()
{
    return (this->numbers);
}