/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:15:31 by adardour          #+#    #+#             */
/*   Updated: 2023/09/26 17:23:51 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int check_tokens(std::string tokens[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (tokens[i] != "+" 
        && tokens[i] != "-" 
        && tokens[i] != "*" 
        && tokens[i] != "/")
        {
            int j = 0;
            while (tokens[i][j] != '\0')
            {
                if (!std::isdigit(tokens[i][j]))
                    return (0);
                j++;
            }
        } 
    }
    return (1);
}

int is_valid_input(std::string input)
{
    int size = 0;
    std::istringstream f(input);
    std::string s;    
    while (getline(f, s, ' '))
    {
        if (!s.empty())
            size++;
    }
    f.clear();
    f.seekg(0);
    std::string tokens[size];
    int i = 0;
    while (getline(f, s, ' '))
    {
        if (!s.empty())
        {
            tokens[i] = s;
            i++;
        }
    }
    if (!check_tokens(tokens, size))
        return (0);
    return (1);   
}