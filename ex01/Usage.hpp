/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Usage.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solareenlo <solareenlo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 03:25:56 by solareenlo        #+#    #+#             */
/*   Updated: 2021/05/22 16:13:16 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_USAGE_HPP_
#define EX01_USAGE_HPP_

#include <iostream>
#include <string>

#define USAGE_NUM 19

const char kUsageStr[USAGE_NUM][100] = {
    "Please input following command.",
    "EXIT: Delete the data and exit the program.",
    "ADD: PutUsagenew contact’s information.",
    "\tfirst name",
    "\tlast name",
    "\tnickname",
    "\tlogin",
    "\tpostal address",
    "\temail address",
    "\tphone number",
    "\tbirthday date",
    "\tfavorite meal",
    "\tunderwear color",
    "\tdarkest secret",
    "SEARCH: Display a list of the available non-empty contacts.",
    "\tindex",
    "\tfirst name",
    "\tlast name",
    "\tnickname"
};

class Usage {
 public:
    Usage(void);
    ~Usage(void);

    void PutUsage(void);
    void PutUsage2(int);
};

#endif  // EX01_USAGE_HPP_
