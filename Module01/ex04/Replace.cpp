/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:47:17 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 20:29:13 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int find_(const std::string &str, const std::string &substring, size_t startPos = 0)
{
    size_t pos = startPos;
    while (pos < str.length() && substring.length() <= str.length() - pos)
    {
        if (str.substr(pos, substring.length()) == substring)
            return pos;
        pos++;
    }
    return (-1); 
}

std::string replace_(std::string &line, std::string s1, std::string s2)
{
    std::string old = line;
    int get_index;
    size_t startPos = 0;

    do
    {
        get_index = find_(line, s1, startPos); 
        if (get_index != -1)    
        {
            line = line.substr(0, get_index) + s2 + line.substr(get_index + s1.length());
            startPos = get_index + s2.length(); 
        }
    } while (get_index != -1);

    return line;
}

Replace::Replace(std::string file, std::string string1, std::string string2) : filename(file) , s1(string1), s2(string2)
{
    
}

std::string Replace::get_filename()
{
    return (filename);
}

std::string Replace::get_s1()
{
    return (s1);
}

std::string Replace::get_s2()
{
    return (s2);
}

void    Replace::replace_things(std::string file_name, std::string string1, std::string string2)
{
    std::fstream file;
    file.open(file_name, std::ios::in);
    if (file.is_open())
    {
        if (file.peek() == std::ifstream::traits_type::eof())
        {
            std::cout << "The file is empty." << std::endl;
            file.close();
            return ;
        }
        std::ofstream file_(file_name + ".replace"); 
        if (!file_.is_open())
        {
            std::cout << "Failed to create the file." << std::endl;
            return;
        }
        std::string line;
        while(getline(file, line))
            file_ << replace_(line, string1, string2) << std::endl;
        file.close();
        file_.close();
        (void)string1;
        (void)string2;
    }
    else
        std::cout << "Error opening file." << std::endl;
}