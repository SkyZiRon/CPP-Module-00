/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:54:25 by bmelo             #+#    #+#             */
/*   Updated: 2026/05/24 14:00:15 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		int j = 0;
		while (av[i][j])
		{
			char c = av[i][j];
			if (c >= 'a' && c <= 'z')
				c -= 32;
			std::cout << c;
			j++;
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
