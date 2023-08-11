/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:13:58 by adardour          #+#    #+#             */
/*   Updated: 2023/07/31 16:16:51 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string f_name;
        std::string l_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact(std::string f_name, std::string l_name, std::string nickname, std::string phone_number, std::string darkest_secret);
        Contact();
        ~Contact();
        const std::string& get_fname();
        const std::string& get_l_name();
        const std::string& get_nickname();
        const std::string& get_phone_number();
        const std::string& get_darkest_secret();
};
#endif
