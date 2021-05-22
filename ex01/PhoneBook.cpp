/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 01:52:58 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->_cntact_size = 0;
}

PhoneBook::~PhoneBook(void) {
}

void    PhoneBook::AddContact(void) {
    if (this->_cntact_size == CONTACT_MAX_SIZE) {
        std::cout << "Phonebook is full." << std::endl;
        return;
    }
    std::cout << "Added" << std::endl;
    this->_cntact_size++;
}
