/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:14:32 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/21 11:47:34 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#define NOISE	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"

size_t	ft_strlen(char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << NOISE << '\n';
	else
	{
		for (int i = 1; i < argc; i++)
		{
			size_t	len = ft_strlen(argv[i]);
			for (size_t j = 0; j < len; j++)
				std::cout << (char)toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
