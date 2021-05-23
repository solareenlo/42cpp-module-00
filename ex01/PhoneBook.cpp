/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/24 00:26:15 by tayamamo         ###   ########.fr       */
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
    if (str.size() > 9)
        std::cout << std::setw(9) << str.substr(0, 9) << ".";
    else
        std::cout << std::right << std::setw(10) << str;
}

void    PhoneBook::PutList_(void) {
    PhoneBook::FormatedCoutCenter_("Index");
    PhoneBook::FormatedCoutCenter_("First Name");
    PhoneBook::FormatedCoutCenter_("Last Name");
    PhoneBook::FormatedCoutCenter_("Nickname");
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
    if (index < 0 || this->contact_size_ - 1 < index)
        return;
    std::cout << "first name\t: " << con_[index].GetFirstName() << std::endl;
    std::cout << "last name\t: " << con_[index].GetLastName() << std::endl;
    std::cout << "nickname\t: " << con_[index].GetNickname() << std::endl;
    std::cout << "login\t\t: " << con_[index].GetLogin() << std::endl;
    std::cout << "postal address\t: ";
    std::cout << con_[index].GetPostalAddres() << std::endl;
    std::cout << "email address\t: ";
    std::cout << con_[index].GetEmailAddress() << std::endl;
    std::cout << "phone number\t: ";
    std::cout << con_[index].GetPhoneNumber() << std::endl;
    std::cout << "birthday date\t: ";
    std::cout << con_[index].GetBirthdayDate() << std::endl;
    std::cout << "favorite meal\t: ";
    std::cout << con_[index].GetFavariteMeal() << std::endl;
    std::cout << "underwear color\t: ";
    std::cout << con_[index].GetUnderwearColor() << std::endl;
    std::cout << "darkest secret\t: ";
    std::cout << con_[index].GetDarkestSecret() << std::endl;
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
        if (str.empty() || isdigit(str[0]) == 0) {
            flag = false;
        } else {
            int i = atoi(str.c_str());
            if (i < 0 || this->contact_size_ - 1 < i) {
                flag = false;
            }
        }
        if (flag) {
            break;
        } else {
            std::cout << "Invalid index." << std::endl;
        }
    }
    int i = atoi(str.c_str());
    if (0 <= i && i < contact_size_)
        PhoneBook::PutContact_(i);
}

bool    PhoneBook::PhoneBookIsEmpty_(void) {
    return (this->contact_size_ == 0);
}

bool    PhoneBook::PhoneBookIsFull_(void) {
    return (this->contact_size_ == PHONEBOOK_MAX_SIZE);
}
