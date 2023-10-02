/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:53:05 by adardour          #+#    #+#             */
/*   Updated: 2023/10/02 20:00:25 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int check(char **argv)
{
    int i = 1;
    while (argv[i])
    {
        int j = 0;
        while (argv[i][j])
        {
            if (!std::isdigit(argv[i][j]))
            {
                return (0);
            }
            j++;
        }
        
        i++;
    }
    return (1);
}


int main(int c,char **argv)
{
    if (c > 1)
    {
        if (check(argv))
            ford_johnson(argv);
        else 
            std::cout << "Error" << std::endl;
    }
    else 
        std::cout << "Error" << std::endl;
}