/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:34 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/24 00:34:08 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_CONTACT_HPP_
#define EX01_CONTACT_HPP_

#include <iostream>
#include <string>
#include <cctype>

#define CONTACT_SIZE 11

enum : int {
  kFirstName,
  kLastName,
  kNickname,
  kLogin,
  kPostalAddress,
  kEmailAddress,
  kPhoneNumber,
  kBirthdayDate,
  kFavariteMeal,
  kUnderwearColor,
  kDarkestSecret,
  kContactSize,
};

const char  con_name[kContactSize][100] = {
    "first name",
    "last name",
    "nickname",
    "login\t",
    "postal address",
    "email address",
    "phone number",
    "birthday date",
    "favarite meal",
    "underwear color",
    "darkest secret",
};

class   Contact {
 public:
    Contact(void);
    ~Contact(void);

    void        GetContact(void);
    std::string GetFirstName(void);
    std::string GetLastName(void);
    std::string GetNickname(void);
    std::string GetLogin(void);
    std::string GetPostalAddres(void);
    std::string GetEmailAddress(void);
    std::string GetPhoneNumber(void);
    std::string GetBirthdayDate(void);
    std::string GetFavariteMeal(void);
    std::string GetUnderwearColor(void);
    std::string GetDarkestSecret(void);

    void        SetContact(void);
    void        SetFirstName(void);
    void        SetLastName(void);
    void        SetNickname(void);
    void        SetLogin(void);
    void        SetPostalAddress(void);
    void        SetEmailAddress(void);
    void        SetPhoneNumber(void);
    void        SetBirthdayDate(void);
    void        SetFavariteMeal(void);
    void        SetUnderwearColor(void);
    void        SetDarkestSecret(void);

 private:
    std::string con_data_[CONTACT_SIZE];
    void        GetLine_(std::string a, std::string &str);
};

#endif  // EX01_CONTACT_HPP_
