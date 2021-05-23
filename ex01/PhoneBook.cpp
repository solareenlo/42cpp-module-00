/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 22:38:06 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->contact_size_ = 0;
}

PhoneBook::~PhoneBook(void) {
}

void    PhoneBook::AddContact(void) {
    if (this->contact_size_ == PHONEBOOK_MAX_SIZE) {
        std::cout << "Phonebook is full." << std::endl;
        return;
    }
    this->con_[contact_size_].SetContact();
    std::cout << "Input completed!" << std::endl;
    this->contact_size_++;
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
    for (int i = 0; i < this->contact_size_; i++) {
        std::cout << '|';
        std::cout << std::right << std::setw(10) << i;
        PhoneBook::FormatedCoutRight_(this->con_[i].GetFirstName());
        PhoneBook::FormatedCoutRight_(this->con_[i].GetLastName());
        PhoneBook::FormatedCoutRight_(this->con_[i].GetNickname());
        std::cout << '|' << std::endl;
    }
    std::cout << std::endl;
}

void    PhoneBook::PutContact_(const int index) {
    if (index < 0 || this->contact_size_ < index)
        return;
    for (int i = 0; i < CONTACT_SIZE; i++) {
        std::cout << con_name[i] << "\t:" <<  std::endl;
    }
}

void    PhoneBook::SearchContact(void) {
    if (PhoneBookIsEmpty_()) {
        std::cout << "Phone Book is empty. Please ADD contact first.";
        std::cout << std::endl;
        return;
    }
    PhoneBook::PutList_();
    std::string  str;
    for (;;) {
        std::cout << "Index > ";
        bool    flag = true;
        std::getline(std::cin, str);
        if (std::cin.bad() || std::cin.eof()) {
            std::cout << std::endl;
            std::cout << "EXIT" << std::endl;
            exit(0);
        }
        if (str.empty()) {
            flag = false;
        } else {
            int i = atoi(str.c_str());
            if (i < 0 || this->contact_size_ < i) {
                flag = false;
            }
        }
        if (flag) {
            break;
        } else {
            std::cout << "Invalid index, " << std::endl;
        }
    }
    int i = atoi(str.c_str());
    if (0 <= i && i <= contact_size_)
        PhoneBook::PutContact_(i);
}

bool    PhoneBook::PhoneBookIsEmpty_(void) {
    return (this->contact_size_ == 0);
}

bool    PhoneBook::PhoneBookIsFull_(void) {
    return (this->contact_size_ == PHONEBOOK_MAX_SIZE);
}
