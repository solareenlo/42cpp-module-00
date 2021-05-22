/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solareenlo <solareenlo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 21:55:20 by solareenlo        #+#    #+#             */
/*   Updated: 2021/05/23 00:19:16 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "Usage.hpp"

int main(void) {
    Usage usage;
    Contact con;
    std::string cmd;

    usage.PutUsage();
    usage.PutUsage2(10);
    for (;;) {
        std::cout << "> ";
        std::getline(std::cin, cmd);
        if (std::cin.bad() || std::cin.eof()) {
            return 1;
        } else if (cmd == "EXIT") {
            break;
        } else if (cmd == "ADD") {
            std::cout << "added" << std::endl;
        } else if (cmd == "SEARCH") {
            std::cout << "searched" << std::endl;
        } else {
            std::cout << "Unknown command" << std::endl;
        }
    }
    return 0;
}
