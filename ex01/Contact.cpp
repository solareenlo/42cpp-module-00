/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 22:19:44 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
    for (int i = 0; i < CONTACT_SIZE; i++)
        con_data_[i] = "";
}

Contact::~Contact(void) {
}

void    Contact::GetContact(void) {
    std::cout << this->con_data_[kFirstName] << std::endl;
    std::cout << this->con_data_[kLastName] << std::endl;
    std::cout << this->con_data_[kNickname] << std::endl;
}

std::string Contact::GetFirstName(void) {
    return (this->con_data_[kFirstName]);
}

std::string Contact::GetLastName(void) {
    return (this->con_data_[kLastName]);
}

std::string Contact::GetNickname(void) {
    return (this->con_data_[kNickname]);
}

void    Contact::GetLine_(const std::string a, std::string &str) {
    std::cout << a;
    std::cout << "> ";
    getline(std::cin, str);
    if (std::cin.bad() || std::cin.eof()) {
        std::cout << std::endl;
        std::cout << "EXIT" << std::endl;
        exit(0);
    }
}

void    Contact::SetFirstName(void) {
    Contact::GetLine_("First Name ", this->con_data_[kFirstName]);
}

void    Contact::SetLastName(void) {
    Contact::GetLine_("Last Name ", this->con_data_[kLastName]);
}

void    Contact::SetNickname(void) {
    Contact::GetLine_("Nickname ", this->con_data_[kNickname]);
}

void    Contact::SetPostalAddress(void) {
    for (;;) {
        bool    flag = true;
        Contact::GetLine_("Postal Address (***-****) ",
            this->con_data_[kPostalAddress]);
        if (this->con_data_[kPostalAddress].size() != 8)
            flag = false;
        for (int i = 0; i < 3; i++) {
            if (isdigit(this->con_data_[kPostalAddress][i]) == 0) {
                flag = false;
                break;
            }
        }
        if (this->con_data_[kPostalAddress][3] != '-')
            flag = false;
        for (int i = 4; i < 8; i++) {
            if (isdigit(this->con_data_[kPostalAddress][i]) == 0) {
                flag = false;
                break;
            }
        }
        if (flag == true)
            break;
    }
}

void    Contact::SetEmailAddress(void) {
    Contact::GetLine_("Email Address ", this->con_data_[kEmailAddress]);
}

void    Contact::SetPhoneNumber(void) {
    for (;;) {
        Contact::GetLine_("Phone Number (10- or 11- digit number) ",
            this->con_data_[kPhoneNumber]);
        bool    flag = true;
        if (!(this->con_data_[kPhoneNumber].size() == 10
            || this->con_data_[kPhoneNumber].size() == 11))
            flag = false;
        for (int i = 0;
            i < static_cast<int>(this->con_data_[kPhoneNumber].size()); i++) {
            if (isdigit(this->con_data_[kPhoneNumber][i]) == 0) {
                flag = false;
                break;
            }
        }
        if (flag)
            break;
    }
}

void    Contact::SetBirthdayDate(void) {
    for (;;) {
        Contact::GetLine_("Birthday Date (MM-DD)",
            this->con_data_[kBirthdayDate]);
        bool    falg = true;
        if (falg)
            break;
    }
}

void    Contact::SetContact(void) {
    SetFirstName();
    SetLastName();
    SetNickname();
    SetPostalAddress();
    SetEmailAddress();
    SetPhoneNumber();
    SetBirthdayDate();
}
