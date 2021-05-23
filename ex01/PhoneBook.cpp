/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 12:51:15 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->cntact_size_ = 0;
}

PhoneBook::~PhoneBook(void) {
}

void    PhoneBook::AddContact(void) {
    if (this->cntact_size_ == CONTACT_MAX_SIZE) {
        std::cout << "Phonebook is full." << std::endl;
        return;
    }
    this->con_[cntact_size_].SetContact();
    std::cout << "Input completed!" << std::endl;
    this->cntact_size_++;
}

void    PhoneBook::FormatedCout_(std::string const str) {
    std::cout << '|';
    std::cout << std::right << std::setw(10) << str;
}

void    PhoneBook::SearchContact(void) {
    for (int i = 0; i < this->cntact_size_; i++) {
        std::cout << '|';
        std::cout << std::right << std::setw(10) << i;
        PhoneBook::FormatedCout_(this->con_[i].GetFirstName());
        PhoneBook::FormatedCout_(this->con_[i].GetLastName());
        PhoneBook::FormatedCout_(this->con_[i].GetNickname());
        std::cout << '|' << std::endl;
    }
}
