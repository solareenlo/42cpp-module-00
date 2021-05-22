/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Usage.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solareenlo <solareenlo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 03:36:30 by solareenlo        #+#    #+#             */
/*   Updated: 2021/05/22 16:13:50 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Usage.hpp"

Usage::Usage(void) {
}

Usage::~Usage(void) {
}

void Usage::PutUsage(void) {
    for (int i = 0; i < USAGE_NUM; i++)
        std::cout << kUsageStr[i] << std::endl;
}

void Usage::PutUsage2(int num) {
    for (int i = 0; i < num; i++)
        std::cout << kUsageStr[i] << std::endl;
}
