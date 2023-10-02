/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:11:30 by adardour          #+#    #+#             */
/*   Updated: 2023/09/26 17:32:28 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int    process(std::string input)
{
    std::stack<int> st;
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
    for (size_t i = 0; i < size; i++)
    {
        if (tokens[i] != "+" 
        && tokens[i] != "-" 
        && tokens[i] != "*" 
        && tokens[i] != "/")
            st.push(std::atoi(tokens[i].c_str()));
        else
        {
            if (tokens[i] == "+")
            {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push(second + first);
            }
            else if (tokens[i] == "-")
            {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push(second - first);
            }
            else if (tokens[i] == "*")
            {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push(second * first);
            }
            else if (tokens[i] == "/")
            {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push(second / first);
            }
        }
    }
    if (st.size() == 1)
    {
        std::cout << st.top() << std::endl;
        return (1);
    }
    return (0);
}

int main(int c,char **argv)
{
    if (c == 2)
    {
        std::string string = argv[1];
        if (!is_valid_input(string))
            std::cout << "Error " << std::endl;
        if (!process(string))
            std::cout << "Error: Calculation expression incomplete" << std::endl;
    }
    else
        std::cout << "Error: Invalid input" << std::endl;
}