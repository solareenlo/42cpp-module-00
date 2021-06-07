/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Usage.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:35:03 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/07 15:33:44 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Usage.hpp"

Usage::Usage() {
}

Usage::~Usage() {
}

void    Usage::PutUsage() {
    for (int i = 0; i < USAGE_NUM; i++)
        std::cout << kUsageStr[i] << std::endl;
    std::cout << std::endl;
}
