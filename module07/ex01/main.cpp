/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:06:04 by adardour          #+#    #+#             */
/*   Updated: 2023/09/21 21:58:32 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    std::string arrayOfStrings[4] = {"achraf","dardour","hello"};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
    iter(intArray, intArrayLength, apply<int>);
    std::cout << "\n";
    iter(arrayOfStrings,4,apply_string<std::string>);
}