/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:45:38 by mlaporte          #+#    #+#             */
/*   Updated: 2024/08/06 18:45:38 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);
		std::string get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_nickname(void) const;
		std::string get_secret(void) const;
		std::string get_phone(void) const;
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_secret;
		std::string	_nickname;
		std::string	_phone;


};

#endif