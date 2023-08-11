/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_phone.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:33:25 by adardour          #+#    #+#             */
/*   Updated: 2023/08/01 17:41:47 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_PHONE_h
#define UTILS_PHONE_h

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

int    valid_phone(std::string& phone);
bool fill_field(const std::string &field_name, std::string &field_value);
bool fill_fields(std::string &fname, std::string &l_name, std::string &nickname, std::string &phone, std::string &darkest);
int    search(PhoneBook phonebook);

#endif