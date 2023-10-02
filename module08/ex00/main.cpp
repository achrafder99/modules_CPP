/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:51:43 by adardour          #+#    #+#             */
/*   Updated: 2023/09/22 15:36:04 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    try
    {
        int i;
        i = 0;
        while (i < 5)
        {
            vec.push_back(i);
            i++;
        }
        easyfind(vec,30);
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
}