/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:21:54 by bmelo             #+#    #+#             */
/*   Updated: 2026/05/24 15:44:14 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "PhoneBook.hpp"

void	PhoneBook::addContact(void)
{
	contact nouveau_contact;
	std::cout << "Saisir les informations du nouveau contact :" << std::endl;
	std::cout << "Entrez le prenom : "; std::cin >> nouveau_contact.first_name;
	std::cout << "Entrez le nom : "; std::cin >> nouveau_contact.last_name;
	std::cout << "Entrez le surnom : "; std::cin >> nouveau_contact.nickname;
	std::cout << "Entrez le numero de telephone : "; std::cin >> nouveau_contact.phone_number;
	std::cout << "Entrez le secret sombre : "; std::cin >> nouveau_contact.darkest_secret;
	std::cin.ignore(10000, '\n');
	int	place = this->_index % 8;
	this->_contacts[place] = nouveau_contact;
	this->_index++;
	std::cout << "Contact ajoute avec succes !" << std::endl;
}

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
}
