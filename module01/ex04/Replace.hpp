/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:47:19 by adardour          #+#    #+#             */
/*   Updated: 2023/07/18 14:25:11 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <iostream> 
#include <string>
#include <fstream>


class Replace
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Replace(std::string file, std::string string1, std::string string2);
        void    replace_things(std::string file_name, std::string string1, std::string string2);
        std::string get_filename();
        std::string get_s1();
        std::string get_s2();
};

#endif