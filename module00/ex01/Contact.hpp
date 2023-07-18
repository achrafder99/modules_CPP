/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:04:26 by adardour          #+#    #+#             */
/*   Updated: 2023/07/17 13:13:45 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string fname;
        std::string lname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        Contact(std::string , std::string lname, std::string nickname, std::string phone_number,
        std::string darkest_secret
        );
        std::string get_fname() const
        {
            return (this->fname);
        };
        std::string get_lname() const
        {
            return (this->lname);
        };  
        std::string get_nickname() const
        {
            return (this->nickname);
        };
        std::string get_phone() const
        {
            return (this->phone_number);
        };
        std::string get_ds() const
        {
            return (this->darkest_secret);
        };
        ~Contact();

};

#endif