/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Usage.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:35:09 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 15:20:10 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_USAGE_HPP_
#define EX01_USAGE_HPP_

#include <iostream>
#include <string>

#define USAGE_NUM 4

const char  kUsageStr[USAGE_NUM][100] = {
    "Please input following command.",
    "EXIT: Delete the data and exit the program.",
    "ADD: PutUsagenew contact’s information.",
    "SEARCH: Display a list of the available non-empty contacts.",
};
//     "\tfirst name",
//     "\tlast name",
//     "\tnickname",
//     "\tlogin",
//     "\tpostal address",
//     "\temail address",
//     "\tphone number",
//     "\tbirthday date",
//     "\tfavorite meal",
//     "\tunderwear color",
//     "\tdarkest secret",
//     "\tindex",
//     "\tfirst name",
//     "\tlast name",
//     "\tnickname"
// };

class   Usage {
 public:
    Usage(void);
    ~Usage(void);

    void    PutUsage(void);
};

#endif  // EX01_USAGE_HPP_
