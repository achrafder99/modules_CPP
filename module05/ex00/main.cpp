/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:22:27 by adardour          #+#    #+#             */
/*   Updated: 2023/09/27 19:49:48 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat br("name ",150);
        std::cout << br << std::endl;
        br.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}