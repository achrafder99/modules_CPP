/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:34:38 by adardour          #+#    #+#             */
/*   Updated: 2023/08/01 17:41:27 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int globalAccountCounter = 0;

#include "Account.hpp"
#include <stdio.h>
#include <ctime>
#include <iostream>

int Account::checkAmount() const 
{
    if (_amount > 0)
        return 1;
    return (0);
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:";

    if (withdrawal > _amount || !checkAmount())
    {
        std::cout << "refused";
        std::cout << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal; 
    _nbWithdrawals++; 
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";"; 
    std::cout << "amount:" << _amount << ";"; 
    std::cout << "nb_withdrawals:" << _nbWithdrawals; 
    std::cout << std::endl;
    return true;
}

void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit; 
    _totalAmount += deposit;
    _nbDeposits++;  
    _totalNbDeposits++;
    std::cout << "amount:" << _amount << ";"; 
    std::cout << "nb_deposits:" << _nbDeposits << ";";
    std::cout << std::endl;
}

void    Account::displayStatus() const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";" ;
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

Account::Account()
{
    this->_accountIndex = 0;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
}

void    Account::_displayTimestamp(void)
{
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    int day = aTime->tm_mday;
    int month = aTime->tm_mon + 1; 
    int year = aTime->tm_year + 1900;
    int hour = aTime->tm_hour;
    int minute = aTime->tm_min;
    int second = aTime->tm_sec;
    std::string current_day = day > 10 ? std::to_string(day) : "0" + std::to_string(day);
    std::string current_month = month > 10 ? std::to_string(month) : "0" + std::to_string(month);
    std::string current_hour = hour > 10 ? std::to_string(hour) : "0" + std::to_string(hour);
    std::string current_minute = minute > 10 ? std::to_string(minute) : "0" + std::to_string(minute);
    std::string current_second = second > 10 ? std::to_string(second) : "0" + std::to_string(second);
    std::cout << "[" << year;
    std::cout << current_month;
    std::cout << current_day;
    std::cout << "_";
    std::cout << current_hour;
    std::cout << current_minute;
    std::cout << current_second;
    std::cout << "] " ;
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";" << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals();
    std::cout << std::endl;
}

Account::Account(int deposit) : _accountIndex(globalAccountCounter++)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << deposit << ";" << "created"; 
    std::cout << std::endl;
    _totalAmount += deposit;
    _amount = deposit;
    _nbAccounts++;
}

Account::~Account()
{
   Account::_displayTimestamp();
   static int index = Account::_nbAccounts;
   std::cout << "index:" << --index << ";amount:" << _amount << ";";
   std::cout << "closed";
   std::cout << std::endl;
}
