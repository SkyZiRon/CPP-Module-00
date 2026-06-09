/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:08:43 by bmelo             #+#    #+#             */
/*   Updated: 2026/05/24 15:43:41 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contacts.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
		return (0);
	PhoneBook Repertoire;
	std::string command;
	while (command != "EXIT")
	{
		std::cout << "Entrez une commande (ADD, SEARCH ou EXIT) : ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
			Repertoire.addContact();
		else if (command == "SEARCH")
			Repertoire.searchContact();
	}
	return (0);
}
