/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:34:34 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 14:48:59 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_CONTACT_HPP_
#define EX01_CONTACT_HPP_

#include <iostream>
#include <string>
#include <cctype>

class   Contact {
 public:
    Contact(void);
    ~Contact(void);
    void        GetContact(void);
    std::string GetFirstName(void);
    std::string GetLastName(void);
    std::string GetNickname(void);
    void        SetContact(void);
    void        SetFirstName(void);
    void        SetLastName(void);
    void        SetNickname(void);
    void        SetPostalAddress(void);
    void        SetEmailAddress(void);
    void        SetPhoneNumber(void);
    void        SetBirthdayDate(void);

 private:
    std::string first_name_;
    std::string last_name_;
    std::string nickname_;
    std::string login_;
    std::string postal_address_;
    std::string email_address_;
    std::string phone_number_;
    std::string birthday_date_;
    std::string favorite_meal_;
    std::string underwear_color_;
    std::string darkest_secret_;
    void        GetLine_(std::string a, std::string &str);
};

#endif  // EX01_CONTACT_HPP_
