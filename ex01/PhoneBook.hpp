/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:40:44 by mlaporte          #+#    #+#             */
/*   Updated: 2024/08/06 18:40:44 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook 
{
	public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add(void);
	void	search(void);
	int		digits(std::string);
	
	private:
	Contact _contact[8];
	int			_id;
	void	_print_table();

};

#endif