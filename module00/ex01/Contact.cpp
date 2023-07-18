/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:09:54 by adardour          #+#    #+#             */
/*   Updated: 2023/07/17 13:13:50 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::Contact(std::string f_name, std::string l_name, std::string nick_name, std::string phone,
    std::string secret
):fname(f_name), lname(l_name), nickname(nick_name) , phone_number(phone), darkest_secret(secret)
{
    
}

Contact::~Contact()
{
    
}