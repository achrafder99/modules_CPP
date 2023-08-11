/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:21:51 by adardour          #+#    #+#             */
/*   Updated: 2023/08/01 17:45:39 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int ft_toupper(char c)
{
    return (c - 32);
}

int main(int c,char **argv)
{
    if (c == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1); 
    }
    int i = 1;
    while (argv[i])
    {
        int j = 0;
        while (argv[i][j] != '\0')
        {
            char c = (argv[i][j] >= 'a' && argv[i][j] <= 'z') ? ft_toupper(argv[i][j]) : argv[i][j];
            std::cout << c;
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}
