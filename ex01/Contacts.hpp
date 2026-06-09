/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:18:46 by bmelo             #+#    #+#             */
/*   Updated: 2026/05/24 16:42:22 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
# define CONTACTS_H

# include <iostream>
# include <string>

class contact
{
	public :
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif
