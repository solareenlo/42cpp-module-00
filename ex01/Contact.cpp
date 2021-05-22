/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 04:07:13 by tayamamo         ###   ########.fr       */
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
}

std::string Contact::GetFirstName(void) {
    return (this->first_name_);
}

std::string Contact::GetLastName(void) {
    return (this->last_name_);
}

void    Contact::SetContact(void) {
    SetFirstName_();
    SetLastName_();
}

void    Contact::GetLine_(const std::string a, std::string &str) {
    std::cout << a;
    std::cout << "> ";
    getline(std::cin, str);
    if (std::cin.bad() || std::cin.eof())
        exit(0);
}

void    Contact::SetLastName_(void) {
    std::string str;
    Contact::GetLine_("Last Name", str);
    this->last_name_ = str;
}

void    Contact::SetFirstName_(void) {
    std::string str;
    Contact::GetLine_("First Name", str);
    this->first_name_ = str;
}
