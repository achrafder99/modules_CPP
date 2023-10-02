/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:48:15 by adardour          #+#    #+#             */
/*   Updated: 2023/09/29 18:13:23 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP


#include <stack>
#include <iostream>
#include <vector>
#include <iterator>
#include <stdio.h>
#include <deque>
#include "list"

template<class T, typename Underlying = std::deque<T> >
class MutantStack : public std::stack<T, Underlying> 
{
    public:
        class iterator
        {
            private:
               typename Underlying::iterator it;
            public:
                iterator(typename Underlying::iterator iter) : it(iter) {}
                T& operator*()
                {
                    return (*it);
                }
                iterator& operator++()
                {
                    ++it;
                    return (*this);
                }
                iterator& operator++(int)
                {
                    iterator temp;
                    ++(*(this->it));
                    return (temp);
                }
                iterator& operator--()
                {
                    --it;
                    return (*this);
                }
                iterator& operator--(int)
                {
                    iterator temp;
                    --(*this);
                    return (temp);
                }
                bool operator!=(const iterator &it_object)
                {
                    return (it != it_object.it);
                }
        };
        iterator begin()
        {
            return (iterator(this->c.begin()));
        }
        iterator end()
        {
            return (iterator(this->c.end()));
        }
};

#endif