/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 21:03:59 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_PHONEBOOK_HPP_
#define EX01_PHONEBOOK_HPP_

#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
#include "Contact.hpp"

#define PHONEBOOK_MAX_SIZE 2

class   PhoneBook {
 public:
    PhoneBook(void);
    ~PhoneBook(void);

    void    AddContact(void);
    void    SearchContact(void);

 private:
    int     contact_size_;
    Contact con_[PHONEBOOK_MAX_SIZE];
    void    FormatedCoutCenter_(std::string const str);
    void    FormatedCoutRight_(std::string const str);
    void    PutList_(void);
    void    PutContact_(const int index);
    bool    PhoneBookIsEmpty_(void);
    bool    PhoneBookIsFull_(void);
};

#endif  // EX01_PHONEBOOK_HPP_
