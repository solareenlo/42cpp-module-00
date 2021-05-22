/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 21:55:20 by solareenlo        #+#    #+#             */
/*   Updated: 2021/05/23 01:56:04 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "Usage.hpp"

int main(void) {
    Usage       usage;
    PhoneBook   pbook;
    std::string cmd;

    usage.PutUsage();
    for (;;) {
        std::cout << "> ";
        std::getline(std::cin, cmd);
        if (std::cin.bad() || std::cin.eof()) {
            return 1;
        } else if (cmd == "EXIT" || cmd == "exit") {
            break;
        } else if (cmd == "ADD" || cmd == "add") {
            pbook.AddContact();
        } else if (cmd == "SEARCH" || cmd == "search") {
            std::cout << "searched" << std::endl;
        } else {
            std::cout << "Unknown command" << std::endl;
        }
    }
    return 0;
}
