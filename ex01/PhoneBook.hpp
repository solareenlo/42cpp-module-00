/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/07 15:32:40 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_PHONEBOOK_HPP_
#define EX01_PHONEBOOK_HPP_

#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
#include "Contact.hpp"

#define PHONEBOOK_MAX_SIZE 8

class   PhoneBook {
 public:
    PhoneBook();
    ~PhoneBook();

    void    AddContact();
    void    SearchContact();

 private:
    int     contact_size_;
    Contact con_[PHONEBOOK_MAX_SIZE];
    void    FormatedCoutCenter_(std::string const str);
    void    FormatedCoutRight_(std::string const str);
    void    PutList_();
    void    PutContact_(const int index);
    bool    PhoneBookIsEmpty_();
    bool    PhoneBookIsFull_();
};

#endif  // EX01_PHONEBOOK_HPP_
