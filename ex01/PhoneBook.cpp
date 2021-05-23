/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 15:32:28 by tayamamo         ###   ########.fr       */
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

void    PhoneBook::FormatedCoutCenter_(std::string const str) {
    std::cout << '|';
    std::cout << std::left << std::setw(10) << str;
}

void    PhoneBook::FormatedCoutRight_(std::string const str) {
    std::cout << '|';
    std::cout << std::right << std::setw(10) << str;
}

void    PhoneBook::PutList_(void) {
    PhoneBook::FormatedCoutCenter_("  Index   ");
    PhoneBook::FormatedCoutCenter_("First Name");
    PhoneBook::FormatedCoutCenter_("Last Name ");
    PhoneBook::FormatedCoutCenter_(" Nickname ");
    std::cout << '|' << std::endl;
    PhoneBook::FormatedCoutCenter_("----------");
    PhoneBook::FormatedCoutCenter_("----------");
    PhoneBook::FormatedCoutCenter_("----------");
    PhoneBook::FormatedCoutCenter_("----------");
    std::cout << '|' << std::endl;
    for (int i = 0; i < this->cntact_size_; i++) {
        std::cout << '|';
        std::cout << std::right << std::setw(10) << i;
        PhoneBook::FormatedCoutRight_(this->con_[i].GetFirstName());
        PhoneBook::FormatedCoutRight_(this->con_[i].GetLastName());
        PhoneBook::FormatedCoutRight_(this->con_[i].GetNickname());
        std::cout << '|' << std::endl;
    }
}

void    PhoneBook::SearchContact(void) {
    PhoneBook::PutList_();
    std::string  str;
    for (;;) {
        std::cout << "Index>";
        bool    flag = true;
        std::getline(std::cin, str);
        if (std::cin.bad() || std::cin.eof()) {
            std::cout << std::endl;
            std::cout << "EXIT" << std::endl;
            exit(0);
        }
        if (flag)
            break;
    }
}
