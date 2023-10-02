/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:10:21 by adardour          #+#    #+#             */
/*   Updated: 2023/10/02 20:05:15 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#define MAX_INT 2147483647

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <limits>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <ctime>


int stoi(const std::string& value);
int    is_valid_value(float value);
int    is_valid_key(std::string &key);

class Btc
{
    private:
        std::multimap<std::string, float> data;
        std::map<std::string, float> db;
    public:
        Btc();
        ~Btc();
        int     check_value(std::string &key, std::string &value);
        void    add_to_data(std::string &key, float value);
        std::multimap<std::string, float> &get_data();
        std::map<std::string, float> &get_csv_db();
};

#endif
