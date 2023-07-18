/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:51:30 by adardour          #+#    #+#             */
/*   Updated: 2023/07/17 22:02:59 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp()
{
    time_t now = time(nullptr);
    std::cout << ctime(&now) << std::endl;
}

Account::Account(int initial_deposit )
{
    initial_deposit = 0;
}

void    Account::displayAccountsInfos()
{
    std::cout << "number of accounts :" << _nbAccounts << std::endl;
    std::cout << "total Amount :" << _totalAmount << std::endl;
    std::cout << "total number of Deposits :" << _totalNbDeposits << std::endl;
    std::cout << "total number of drawls :" << _totalNbWithdrawals << std::endl;
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int    Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

void    Account::makeDeposit(int deposit)  {
    
}

bool    Account::makeWithdrawal(int withdrawal)  {
    return false;
}


void    Account::displayStatus() const {
    
    std::cout << "account Index :" << _accountIndex << std::endl;
    std::cout << "total Amount :" << _amount << std::endl;
    std::cout << "total number of Deposits :" << _nbDeposits << std::endl;
    std::cout << "total number of drawls :" << _nbWithdrawals << std::endl;
}


int    Account::checkAmount() const {

    return (1);   
}


Account::~Account()
{
    
}