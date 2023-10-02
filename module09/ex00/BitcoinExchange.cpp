/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:13:08 by adardour          #+#    #+#             */
/*   Updated: 2023/09/24 17:36:11 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int stoi(const std::string& value)
{
    int result = 0;
    int sign = 1;
    size_t i = 0;

    while (i < value.length() && isspace(value[i])) {
        i++;
    }
    if (i < value.length() && (value[i] == '-' || value[i] == '+')) {
        if (value[i] == '-')
            sign = -1;
        i++;
    }
    while (i < value.length() && isdigit(value[i]))
    {
        if (result > std::numeric_limits<int>::max() / 10 || (result == std::numeric_limits<int>::max() / 10 && (value[i] - '0') > std::numeric_limits<int>::max() % 10))
            return (-2);
        result = result * 10 + (value[i] - '0');
        i++;
    }
    return result * sign;
}

Btc::Btc()
{
    
}

Btc::~Btc()
{
    
}

int    is_valid_value(float value)
{
    if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (0);
    }
    if (value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (0);
    }
    return (1);
}

template<typename T>
int     is_valid_date(T date)
{
    int i;
    i = 0;
    while (date[i])
    {
        if (!std::isdigit(date[i]))
            return (0);
        i++;
    }
    return (1);
}

int    is_valid_key(std::string &key)
{
    int year, month, day;
    size_t pos = key.find("bad_input");
    if (pos != std::string::npos)
    {
        std::cout << "Error: bad input => " << key.substr(key.find('t') + 1) << std::endl;
        return (0);
    }
    size_t first_pos = key.find('-');
    size_t second_pos = key.find('-',first_pos + 1) - 1;
    size_t last = key.find('-',second_pos + 1);
    year = stoi(key.substr(0, first_pos));
    month = stoi(key.substr(first_pos + 1, second_pos - first_pos));
    day = stoi(key.substr(last + 1));

    if (month < 1 || month > 12 || day < 1 || day > 31
    || !is_valid_date(key.substr(0, first_pos)) 
    || !is_valid_date(key.substr(first_pos + 1, second_pos - first_pos)) 
    || !is_valid_date(key.substr(last + 1)))
    {
        std::cout << "Error: bad input => " << key << std::endl;
        return (0);
    }
    return (1);
}

void    Btc::add_to_data(std::string &key, float value)
{
    this->data.insert(std::make_pair(key, value));
}

std::multimap<std::string, float> &Btc::get_data()
{
    return (this->data);
}

std::map<std::string, float> &Btc::get_csv_db()
{
    return this->db;
    // return this->db;
}