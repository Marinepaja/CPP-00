/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:26:14 by mlaporte          #+#    #+#             */
/*   Updated: 2024/08/08 13:26:14 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

#include <iostream>
#include <string>

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone = phone;
	this->_secret = secret;
}

std::string Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_secret(void) const
{
	return (this->_secret);
}

std::string Contact::get_phone(void) const
{
	return (this->_phone);
}