/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:27:28 by adardour          #+#    #+#             */
/*   Updated: 2023/09/28 17:26:46 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
     try {
        // Test the Array class
        Array<int> arr1(5);
        for (unsigned int i = 0; i < arr1.size(); ++i) {
            arr1[i] = i * 10;
        }

        Array<int> arr2 = arr1; // Copy constructor
        arr2[2] = 42;           // Modify arr2, should not affect arr1

        Array<int> arr3;
        arr3 = arr1;            // Assignment operator
        arr3[4] = 99;           // Modify arr3, should not affect arr1

        std::cout << "arr1: ";
        for (unsigned int i = 0; i < arr1.size(); ++i) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "arr2: ";
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            std::cout << arr2[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "arr3: ";
        for (unsigned int i = 0; i < arr3.size(); ++i) {
            std::cout << arr3[i] << " ";
        }
        std::cout << std::endl;
        Array<std::string> Array_of_string(10);
        for (size_t i = 0; i < Array_of_string.size(); i++)
        {
            Array_of_string[i] = "Hello";
        }
        for (size_t i = 0; i < Array_of_string.size(); i++)
        {
            std::cout << Array_of_string[i] << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    
}