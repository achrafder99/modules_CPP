/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:46:35 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 14:41:19 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int c, char **argv)
{
    std::string filename, s1, s2;
    if (c != 4)
    {
        std::cout << "Error :";
        std::cout << "(filename) ";
        std::cout << "(to find) ";
        std::cout << "(replace)";
        std::cout << std::endl;
        return (1);
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    Replace replace(filename, s1, s2);
    replace.replace_things(replace.get_filename(), replace.get_s1(), replace.get_s2());
}