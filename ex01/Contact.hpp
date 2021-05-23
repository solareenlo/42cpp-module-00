/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:34 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/24 02:55:03 by tayamamo         ###   ########.fr       */
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

 private:
    std::string con_data_[CONTACT_SIZE];
    void        GetLine_(std::string a, std::string &str);
    bool        IsEmailAddress_(const std::string &str);
    void        SetFirstName_(void);
    void        SetLastName_(void);
    void        SetNickname_(void);
    void        SetLogin_(void);
    void        SetPostalAddress_(void);
    void        SetEmailAddress_(void);
    void        SetPhoneNumber_(void);
    void        SetBirthdayDate_(void);
    void        SetFavariteMeal_(void);
    void        SetUnderwearColor_(void);
    void        SetDarkestSecret_(void);
};

#endif  // EX01_CONTACT_HPP_
