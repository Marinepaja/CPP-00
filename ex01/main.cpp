/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:36:02 by mlaporte          #+#    #+#             */
/*   Updated: 2024/08/06 18:36:02 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string	str;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "What do you want to do ?" << std::endl;
		if (!std::getline(std::cin, str))
			break;
		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		else if (str == "EXIT")
			break;
	}
	return (0);
}