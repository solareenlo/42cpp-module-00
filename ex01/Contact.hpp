/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:34 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/07 15:25:52 by tayamamo         ###   ########.fr       */
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
    Contact();
    ~Contact();

    std::string GetFirstName();
    std::string GetLastName();
    std::string GetNickname();
    std::string GetLogin();
    std::string GetPostalAddres();
    std::string GetEmailAddress();
    std::string GetPhoneNumber();
    std::string GetBirthdayDate();
    std::string GetFavariteMeal();
    std::string GetUnderwearColor();
    std::string GetDarkestSecret();

    void        SetContact();

 private:
    std::string con_data_[CONTACT_SIZE];
    void        GetLine_(std::string a, std::string &str);
    bool        IsEmailAddress_(const std::string &str);
    void        SetFirstName_();
    void        SetLastName_();
    void        SetNickname_();
    void        SetLogin_();
    void        SetPostalAddress_();
    void        SetEmailAddress_();
    void        SetPhoneNumber_();
    void        SetBirthdayDate_();
    void        SetFavariteMeal_();
    void        SetUnderwearColor_();
    void        SetDarkestSecret_();
};

#endif  // EX01_CONTACT_HPP_
