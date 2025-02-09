/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:19:39 by mlaporte          #+#    #+#             */
/*   Updated: 2024/08/06 16:19:39 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
 	else if (argc)
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str = std::string(argv[i]);
			for (size_t j = 0; j < str.size(); j++)
				std::cout << (char) std::toupper(str[j]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}