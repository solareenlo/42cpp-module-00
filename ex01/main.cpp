/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 21:55:20 by solareenlo        #+#    #+#             */
/*   Updated: 2021/05/24 01:16:17 by tayamamo         ###   ########.fr       */
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
            std::cout << std::endl;
            std::cout << "EXIT" << std::endl;
            break;
        } else if (cmd == "EXIT" || cmd == "exit") {
            std::cout << "EXIT" << std::endl;
            break;
        } else if (cmd == "ADD" || cmd == "add") {
            pbook.AddContact();
        } else if (cmd == "SEARCH" || cmd == "search") {
            pbook.SearchContact();
        }
    }
    return 0;
}
