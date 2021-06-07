/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solareenlo <solareenlo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:40:11 by solareenlo        #+#    #+#             */
/*   Updated: 2021/06/07 15:24:46 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#define NOISE    "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int    main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << NOISE << std::endl;
    } else {
        for (int i = 1; i < argc; i++)
            for (size_t j = 0; argv[i][j]; j++)
                std::cout << static_cast<char>(toupper(argv[i][j]));
        std::cout << std::endl;
    }
    return (0);
}
