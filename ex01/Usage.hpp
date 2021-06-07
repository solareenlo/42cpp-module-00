/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Usage.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:35:09 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/07 15:33:32 by tayamamo         ###   ########.fr       */
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

class   Usage {
 public:
    Usage();
    ~Usage();

    void    PutUsage();
};

#endif  // EX01_USAGE_HPP_
