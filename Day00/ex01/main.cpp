/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:39:07 by lshail            #+#    #+#             */
/*   Updated: 2023/11/02 15:01:47 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook	phoneBook;
	Contact		cn;
	std::string	str;

	std::cout << std::endl;
	std::cout << "             \033[31;1mWelcome To My Awesome PhoneBook\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << " \033[32;1mAvailable Commands : (ADD, SEARCH or EXIT) :\033[0m " << std::endl;
	std::cout << std::endl;
	while (true)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, str);
		if (std::cin.fail())
			break;
		else if (str == "EXIT")
			exit(0);
		else if (str == "ADD")
			phoneBook.add();
		else if (str == "SEARCH")
			phoneBook.search();
		else
			std::cout << "\033[31;1mCommand not Found!\033[0m" << std::endl;
	}
	return (0);
}