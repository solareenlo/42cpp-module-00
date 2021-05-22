/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 01:55:14 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_PHONEBOOK_HPP_
#define EX01_PHONEBOOK_HPP_

#include <iostream>
#include <string>
#include "Contact.hpp"

#define CONTACT_MAX_SIZE 2

class   PhoneBook {
 public:
    PhoneBook(void);
    ~PhoneBook(void);
    void    AddContact(void);

 private:
    size_t  _cntact_size;
    Contact con[CONTACT_MAX_SIZE];
};

#endif  // EX01_PHONEBOOK_HPP_
