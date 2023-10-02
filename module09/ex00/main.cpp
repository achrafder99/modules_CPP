/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:54:48 by adardour          #+#    #+#             */
/*   Updated: 2023/09/24 17:39:33 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <ctime>
#include <sstream>

std::string trim(const std::string& str)
{
    size_t first = str.find_first_not_of(" \t\n\r");
    if (first == std::string::npos)
        return "";
    size_t last = str.find_last_not_of(" \t\n\r");
    return str.substr(first, (last - first + 1));
}

std::string    convert_to_date_human(time_t ms)
{
    struct tm timeinfo;
    gmtime_r(&ms, &timeinfo);
    int year = timeinfo.tm_year + 1900;
    int month = timeinfo.tm_mon + 1; 
    int day = timeinfo.tm_mday;

    std::stringstream year_s;
    std::stringstream month_s;
    std::stringstream day_s;
    year_s << year;
    month_s << month;
    day_s << day;

    if (month < 10)
        month_s.str("0" + month_s.str());
    if (day < 10)
        day_s.str("0" + day_s.str());
    std::string myString = year_s.str() + "-" + month_s.str() + "-" + day_s.str();
    return myString;
}

time_t convert_to_milliseconds(std::string &key)
{
    struct tm timeinfo = {};
    if (std::sscanf(key.c_str(), "%d-%d-%d", &timeinfo.tm_year, &timeinfo.tm_mon, &timeinfo.tm_mday) != 3)
        std::cerr << "Error parsing date string" << std::endl;
    timeinfo.tm_year -= 1900;
    timeinfo.tm_mon -= 1;
    timeinfo.tm_hour = 0;
    timeinfo.tm_min = 0;
    timeinfo.tm_sec = 0;
    timeinfo.tm_isdst = -1;
    time_t unixTimestamp = std::mktime(&timeinfo);
    return (unixTimestamp);
}

std::map<std::string, float>    &parse_db_csv(Btc &btc)
{
    std::string line;
    std::ifstream file("./cpp_09/data.csv");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            size_t pos = line.find(',');
            std::string key = line.substr(0,pos);
            float value = atof(line.substr(pos + 1).c_str());
            btc.get_csv_db()[key] = value;
        }
        file.close();
    }
    return (btc.get_csv_db());
}

time_t    get_value(Btc &btc, std::string &key)
{
    time_t unixTimestamp = convert_to_milliseconds(key);
    std::map<std::string, float>::iterator it;
    for (it = btc.get_csv_db().begin(); it != btc.get_csv_db().end(); ++it){
        std::string key = it->first;
        float value = it->second;
        if (convert_to_milliseconds(key) >= unixTimestamp)
            return (convert_to_milliseconds(key));
    }
    return (0);
}

void    show_output(Btc &btc)
{
    std::multimap<std::string, float>::iterator it;
    for (it = btc.get_data().begin(); it != btc.get_data().end(); ++it)
    {
        std::string key = it->first;
        float value = it->second;
        if (is_valid_key(key) && is_valid_value(value))
        {
            std::map<std::string, float> csv = parse_db_csv(btc);
            time_t the_key_mls = get_value(btc, key);
            std::string key_form_csv = convert_to_date_human(the_key_mls);
            float multi =  value * btc.get_csv_db()[key_form_csv];
            std::cout << key << " => ";
            std::cout << value;
            std::cout << " = ";
            std::cout << multi << std::endl;
        }
    }
}

int main(int c, char **argv)
{
    std::string line;
    std::string key;
    const char* value;
    std::ifstream file(argv[1]);
    if (file.is_open()) {
        Btc btc = Btc();
        while (getline(file, line)){
            size_t pos = line.find('|');
            if (line.substr(0,pos - 1) != "date")
            {
                if (pos == std::string::npos)
                    btc.get_data().insert(std::make_pair("bad_input" + line,0));
                else
                {
                    key = trim(line.substr(0, pos));
                    value = trim(line.substr(pos + 1)).c_str();
                    if (value[0] == '\0')
                        btc.get_data().insert(std::make_pair("bad_input" + line,0));
                    else
                        btc.add_to_data(key, std::atof(value));
                }
            }
        }
        show_output(btc);
        file.close();
    } else {
        std::cerr << "Unable to open the file." << std::endl;
        return 1;
    }
}