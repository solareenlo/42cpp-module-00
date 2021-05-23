/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 15:44:50 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void    Contact::GetContact(void) {
    std::cout << this->first_name_ << std::endl;
    std::cout << this->last_name_ << std::endl;
    std::cout << this->nickname_ << std::endl;
}

std::string Contact::GetFirstName(void) {
    return (this->first_name_);
}

std::string Contact::GetLastName(void) {
    return (this->last_name_);
}

std::string Contact::GetNickname(void) {
    return (this->nickname_);
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

void    Contact::SetLastName(void) {
    Contact::GetLine_("Last Name", this->last_name_);
}

void    Contact::SetFirstName(void) {
    Contact::GetLine_("First Name", this->first_name_);
}

void    Contact::SetNickname(void) {
    Contact::GetLine_("Nickname", this->nickname_);
}

void    Contact::SetPostalAddress(void) {
    for (;;) {
        bool    flag = true;
        Contact::GetLine_("Postal Address (***-****)", this->postal_address_);
        if (this->postal_address_.size() != 8)
            flag = false;
        for (int i = 0; i < 3; i++) {
            if (isdigit(this->postal_address_[i]) == 0) {
                flag = false;
                break;
            }
        }
        if (this->postal_address_[3] != '-')
            flag = false;
        for (int i = 4; i < 8; i++) {
            if (isdigit(this->postal_address_[i]) == 0) {
                flag = false;
                break;
            }
        }
        if (flag == true)
            break;
    }
}

void    Contact::SetEmailAddress(void) {
    Contact::GetLine_("Email Address", this->email_address_);
}

void    Contact::SetPhoneNumber(void) {
    for (;;) {
        Contact::GetLine_("Phone Number (10- or 11- digit number)", this->phone_number_);
        bool    flag = true;
        if (!(this->phone_number_.size() == 10
            || this->phone_number_.size() == 11))
            flag = false;
        for (int i = 0; i < static_cast<int>(this->phone_number_.size()); i++) {
            if (isdigit(this->phone_number_[i]) == 0) {
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
        Contact::GetLine_("Birthday Date (MM-DD)", this->birthday_date_);
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
