/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solareenlo <solareenlo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:40:11 by solareenlo        #+#    #+#             */
/*   Updated: 2021/05/21 21:29:28 by solareenlo       ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#define NOISE    "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

size_t    ft_strlen(char *s) {
    size_t    i;

    if (s == NULL)
        return (0);
    i = 0;
    while (s[i])
        i++;
    return (i);
}

int    main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << NOISE << std::endl;
    } else {
        for (int i = 1; i < argc; i++) {
            size_t    len = ft_strlen(argv[i]);
            for (size_t j = 0; j < len; j++)
                std::cout << static_cast<char>(toupper(argv[i][j]));
        }
        std::cout << std::endl;
    }
    return (0);
}
