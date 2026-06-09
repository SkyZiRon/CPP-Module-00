/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:14:50 by bmelo             #+#    #+#             */
/*   Updated: 2026/05/24 16:42:19 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contacts.hpp"
#include <iostream>

class PhoneBook
{
	private :
		contact _contacts[8];
		int		_index;
	public :
		PhoneBook();
		void	addContact();
		void	searchContact();
};

std::string format_column(std::string str);
void	searchContact();

#endif
