/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Usage.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 01:35:03 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/23 15:07:02 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Usage.hpp"

Usage::Usage(void) {
}

Usage::~Usage(void) {
}

void    Usage::PutUsage(void) {
    for (int i = 0; i < USAGE_NUM; i++)
        std::cout << kUsageStr[i] << std::endl;
    std::cout << std::endl;
}
