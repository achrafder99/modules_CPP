/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:21:51 by adardour          #+#    #+#             */
/*   Updated: 2023/07/16 17:48:33 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

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
            char c = (argv[i][j] >= 'A' && argv[i][j]) ? toupper(argv[i][j]) : argv[i][j];
            std::cout << c;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}