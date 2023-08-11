/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:17:35 by adardour          #+#    #+#             */
/*   Updated: 2023/08/01 17:41:39 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string fname, std::string lname, std::string nick_name, std::string phone, std::string dark_set) :
    f_name(fname), l_name(lname),nickname(nick_name),phone_number(phone),darkest_secret(dark_set)
{
    
}

Contact::Contact()
{
    
}

const std::string& Contact::get_fname()
{
    return this->f_name;
}
const std::string& Contact::get_l_name()
{
    return this->l_name;
}
const std::string& Contact::get_nickname()
{
    return this->nickname;
}
const std::string& Contact::get_phone_number()
{
    return this->phone_number;
}
const std::string& Contact::get_darkest_secret()
{
    return this->darkest_secret;
}

Contact::~Contact()
{
    
}