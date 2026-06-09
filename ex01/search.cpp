/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 15:04:49 by bmelo             #+#    #+#             */
/*   Updated: 2026/05/24 15:42:44 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

void	PhoneBook::searchContact(void)
{
	if (this->_index == 0)
	{
		std::cout << "Le repertoire est vide" << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << std::right << "index"
	<< "|" << std::setw(10) << std::right << "first name"
	<< "|" << std::setw(10) << std::right << "last name"
	<< "|" << std::setw(10) << std::right << "nickname" << "|" << std::endl;
	int limite = this->_index;
	if (limite > 8)
		limite = 8;
	for (int i = 0; i < limite; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i
		<< "|" << std::setw(10) << std::right << format_column(this->_contacts[i].first_name)
		<< "|" << std::setw(10) << std::right << format_column(this->_contacts[i].last_name)
		<< "|" << std::setw(10) << std::right << format_column(this->_contacts[i].nickname) << "|" << std::endl;
	}
	int	user_index;
	std::cout << "Entrez l'index desire : ";
	if (!(std::cin >> user_index))
	{
		std::cout << "Idex invalide !" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return ;
	}
	std::cin.ignore(10000, '\n');
	if (user_index >= 0 && user_index < limite)
	{
		std::cout << "Prenom : " << this->_contacts[user_index].first_name << std::endl;
		std::cout << "Nom : " << this->_contacts[user_index].last_name << std::endl;
		std::cout << "Secret Sombre : " << this->_contacts[user_index].darkest_secret << std::endl;
 	}
	else
		std::cout << "Index hors limite." << std::endl;
}

std::string format_column(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
