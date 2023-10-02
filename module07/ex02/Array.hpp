/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:26:36 by adardour          #+#    #+#             */
/*   Updated: 2023/09/28 17:10:51 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template<class T>
class Array {
    private:
        T *data;
        unsigned int length;
    public:
        Array(): data(nullptr), length(0)
        {
            
        }

        Array(unsigned int size_array): length(size_array)
        {
            data = new T[size_array];
            for (unsigned int i = 0; i < size_array; i++)
            {
               std::cout << data[i] << std::endl;
            }
            
        }
        Array(const Array& other):length(other.length)
        {
            data = new T[length];
            for (size_t i = 0; i < length; i++)
            {
                data[i] = other.data[i];
            }
        }

        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                delete[] data;
                this->length =  other.length;
                data = new T[length];
                for (size_t i = 0; i < length; i++)
                {
                    data[i] = other.data[i];
                }
            }
            return *this;
        }

        T& operator[](unsigned int index)
        {
            if (index >= length)
            {
                throw std::out_of_range("out of range");
            }
            return this->data[index];
        }

        unsigned int size() const {
            return (this->length);
        }
        ~Array()
        {
            delete [] data;
        }
    };

#endif
