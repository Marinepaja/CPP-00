/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:59:01 by mlaporte          #+#    #+#             */
/*   Updated: 2024/08/06 18:59:01 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>


PhoneBook::PhoneBook(void)
{
	this->_id = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void PhoneBook::add(void)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string secret;
	std::string phone;

	while (1)
	{
		std::cout << "Enter first name : ";
		if (!std::getline(std::cin, first_name))
			return;
		if (first_name.length() == 0)
			std::cout << "A contact cannot have an empty field!" << std::endl;
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter last name : ";
		if (!std::getline(std::cin, last_name))
			return;
		if (last_name.length() == 0)
			std::cout << "A contact cannot have an empty field!" << std::endl;
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter nickname : ";
		if (!std::getline(std::cin, nickname))
			return;
		if (nickname.length() == 0)
			std::cout << "A contact cannot have an empty field!" << std::endl;
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter phone number : ";
		if (!std::getline(std::cin, phone))
			return;
		if (phone.length() == 0)
			std::cout << "A contact cannot have an empty field!" << std::endl;
		else if (phone.length() != 10 || digits(phone))
			std::cout << "Not a valid number!" << std::endl;
		else
			break;
	}
	while (1)
	{
		std::cout << "Enter darkest secret : ";
		if (!std::getline(std::cin, secret))
			return;
		if (secret.length() == 0)
			std::cout << "A contact cannot have an empty field!" << std::endl;
		else
			break;
	}
	std::cout << std::endl;
	this->_contact[this->_id % 8] = Contact(first_name, last_name, nickname, phone, secret);
	std::cout << "Contact added successfully !" << std::endl << std::endl;
	this->_id++;
}

void PhoneBook::_print_table()
{
	std::string	first;
	std::string	last;
	std::string	nickname;
	int i = 0;

	while (i < 8)
	{
		first = _contact[i].get_first_name();
		if (first.length() == 0)
			break;
		std::cout << "         " << i + 1 << "|";
		if (first.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << first[j];
			std::cout << ".";
		}
		else
		{
			for (size_t i = 0; i < 10 - first.length(); i ++)
				std::cout << " ";
			std::cout << first;
		}
		std::cout << "|";
		last = _contact[i].get_last_name();
		if (last.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << last[j];
			std::cout << ".";
		}
		else
		{
			for (size_t i = 0; i < 10 - last.length(); i ++)
				std::cout << " ";
			std::cout << last;
		}
		std::cout << "|";
		nickname = _contact[i].get_nickname();
		if (nickname.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << nickname[j];
			std::cout << ".";
		}
		else
		{
			for (size_t i = 0; i < 10 - nickname.length(); i ++)
				std::cout << " ";
			std::cout << nickname;
		}
		std::cout << std::endl;
	i++;
	}
	std::cout << std::endl;
}

void PhoneBook::search(void)
{
	std::string input;
	int	nb = 0;
	while (nb < 8 && _contact[nb].get_first_name().length() != 0)
		nb++;
	if (!nb)
	{
		std::cout << "Sorry you don't have any friend" << std::endl;
		return ;
	}
	nb--;
	_print_table();
	std::cout << "Enter contact index : ";
	std::getline(std::cin, input);
	while (input.length() != 1 || input[0] < '1' || input[0] > nb + 49)
	{
		std::cout << std::endl << "Wrong input, please enter the index of one existing contact ! " << std::endl;
		std::getline(std::cin, input);
	}
	nb = input[0] - 49;
	std::cout << std::endl << "First name :     " << _contact[nb].get_first_name() << std::endl 
	<< "Last name :      " << _contact[nb].get_last_name() << std::endl 
	<< "Nickname :       " << _contact[nb].get_nickname() << std::endl 
	<< "Phone number :   " << _contact[nb].get_phone() << std::endl 
	<< "Darkest secret : " << _contact[nb].get_secret() << std::endl << std::endl;
}

int	PhoneBook::digits(std::string phone)
{
	for (size_t i = 0; i < 10; i++)
	{
		if (!isdigit(phone[i]))
			return (1);
	}
	return (0);
}