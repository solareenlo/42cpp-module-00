/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 12:50:00 by tayamamo         ###   ########.fr       */
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

void    Contact::SetLastName_(void) {
    Contact::GetLine_("Last Name", this->last_name_);
}

void    Contact::SetFirstName_(void) {
    Contact::GetLine_("First Name", this->first_name_);
}

void    Contact::SetNickname_(void) {
    Contact::GetLine_("Nickname", this->nickname_);
}

void    Contact::SetPostalAddress_(void) {
    for (;;) {
        bool    flag = true;
        Contact::GetLine_("Postal", this->postal_address_);
        for (int i = 0; this->postal_address_[i]; i++) {
            if (isdigit(this->postal_address_[i]) == 0) {
                std::cout << "Invarid postal address" << std::endl;
                flag = false;
                break;
            }
        }
        if (flag == true)
            break;
    }
}

void    Contact::SetContact(void) {
    SetFirstName_();
    SetLastName_();
    SetNickname_();
    SetPostalAddress_();
}
