/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:59:38 by adardour          #+#    #+#             */
/*   Updated: 2023/07/16 22:55:56 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int index_contact;
    public:
        PhoneBook();
        int is_full();
        int get_index();
        void set_index();
        Contact get_contact(int index);
        void    add_contact(Contact contact, int index);
};
#endif