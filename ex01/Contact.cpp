/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/24 02:53:21 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
    for (int i = 0; i < CONTACT_SIZE; i++)
        this->con_data_[i] = "";
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

std::string Contact::GetLogin(void) {
    return (this->con_data_[kLogin]);
}

std::string Contact::GetPostalAddres(void) {
    return (this->con_data_[kPostalAddress]);
}

std::string Contact::GetEmailAddress(void) {
    return (this->con_data_[kEmailAddress]);
}

std::string Contact::GetPhoneNumber(void) {
    return (this->con_data_[kPhoneNumber]);
}

std::string Contact::GetBirthdayDate(void) {
    return (this->con_data_[kBirthdayDate]);
}

std::string Contact::GetFavariteMeal(void) {
    return (this->con_data_[kFavariteMeal]);
}

std::string Contact::GetUnderwearColor(void) {
    return (this->con_data_[kUnderwearColor]);
}

std::string Contact::GetDarkestSecret(void) {
    return (this->con_data_[kDarkestSecret]);
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

void    Contact::SetFirstName_(void) {
    Contact::GetLine_("first name ", this->con_data_[kFirstName]);
}

void    Contact::SetLastName_(void) {
    Contact::GetLine_("last name ", this->con_data_[kLastName]);
}

void    Contact::SetNickname_(void) {
    Contact::GetLine_("nickname ", this->con_data_[kNickname]);
}

void    Contact::SetLogin_(void) {
    Contact::GetLine_("login ", this->con_data_[kLogin]);
}

void    Contact::SetPostalAddress_(void) {
    std::string str = "";
    for (;;) {
        bool    flag = true;
        Contact::GetLine_("postal address (***-****) ", str);
        if (!str.empty()) {
            if (str.size() != 8)
                flag = false;
            for (int i = 0; i < 3; i++) {
                if (isdigit(str[i]) == 0) {
                    flag = false;
                    break;
                }
            }
            if (str[3] != '-')
                flag = false;
            for (int i = 4; i < 8; i++) {
                if (isdigit(str[i]) == 0) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == true)
            break;
    }
    this->con_data_[kPostalAddress] = str;
}

bool    Contact::IsEmailAddress_(const std::string &str) {
    std::string::size_type at = str.find("@");
    std::string::size_type dot = str.find(".", at);
    return (at != std::string::npos && dot != std::string::npos);
}

void    Contact::SetEmailAddress_(void) {
    std::string str = "";
    for (;;) {
        bool    flag = true;
        Contact::GetLine_("email address ", str);
        if (!str.empty()) {
            if (!IsEmailAddress_(str))
                flag = false;
        }
        if (flag)
            break;
    }
    this->con_data_[kEmailAddress] = str;
}

void    Contact::SetPhoneNumber_(void) {
    std::string str = "";
    for (;;) {
        Contact::GetLine_("Phone Number (10- or 11- digit number) ", str);
        bool    flag = true;
        if (!str.empty()) {
            if (!(str.size() == 10 || str.size() == 11))
                flag = false;
            for (int i = 0; i < static_cast<int>(str.size()); i++) {
                if (isdigit(str[i]) == 0) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            break;
    }
    this->con_data_[kPhoneNumber] = str;
}

void    Contact::SetBirthdayDate_(void) {
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string str = "";
    for (;;) {
        Contact::GetLine_("birthday date (mm-dd) ", str);
        bool    flag = true;
        if (!str.empty()) {
            if (str.size() != 5) {
                flag = false;
            } else {
                if (!isdigit(str[0]) || !isdigit(str[1]) || str[2] != '-'
                    || !isdigit(str[3]) || !isdigit(str[4])) {
                    flag = false;
                } else {
                    int month = (str[0] - '0') * 10 + str[1] - '0';
                    if (month < 1 || 12 < month) {
                        flag = false;
                    } else {
                        int day = (str[3] - '0') * 10 + str[4] - '0';
                        if (day < 1 || days[month - 1] < day)
                            flag = false;
                    }
                }
            }
        }
        if (flag)
            break;
    }
    this->con_data_[kBirthdayDate] = str;
}

void    Contact::SetFavariteMeal_(void) {
    Contact::GetLine_("favarite meal ", this->con_data_[kFavariteMeal]);
}

void    Contact::SetUnderwearColor_(void) {
    Contact::GetLine_("underwear color ", this->con_data_[kUnderwearColor]);
}

void    Contact::SetDarkestSecret_(void) {
    Contact::GetLine_("darkest secret ", this->con_data_[kDarkestSecret]);
}

void    Contact::SetContact(void) {
    SetFirstName_();
    SetLastName_();
    SetNickname_();
    SetLogin_();
    SetPostalAddress_();
    SetEmailAddress_();
    SetPhoneNumber_();
    SetBirthdayDate_();
    SetFavariteMeal_();
    SetUnderwearColor_();
    SetDarkestSecret_();
}
