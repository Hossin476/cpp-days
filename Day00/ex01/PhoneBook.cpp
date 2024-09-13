/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:51:21 by lshail            #+#    #+#             */
/*   Updated: 2023/10/18 14:51:21 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->max = 8;
	this->size = 0;
	return;
}

void PhoneBook::search()
{
	int			i;
	std::string	str;
	std::string	input;
	int			contactIndex;
	bool		validInput;
	bool		isNumeric;

	contactIndex = 0;
	validInput = false;
	isNumeric = true;
	if (this->size == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}
	std::cout << "     index | first name | last name |  nickname " << std::endl;
	for (i = 0; i < this->size; i++)
	{
		std::cout << std::setw(10) << i << "|";
		str = contacts[i].getFirstName();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << "|";
		str = contacts[i].getLastName();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << "|";
		str = contacts[i].getNickname();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << "|" << std::endl;
	}
	while (!validInput)
	{
		std::cin.clear();
		std::cout << "Enter the index: ";
		std::getline(std::cin, input);
		if (!std::cin.good() || std::cin.eof())
			exit(0);
		for (size_t i = 0; i < input.length(); i++)
		{
			if (!isdigit(input[i]))
			{
				isNumeric = false;
				std::cin.clear();
				break;
			}
			isNumeric = true;
		}
		contactIndex = std::atoi(input.c_str());
		if (contactIndex < 0 || (contactIndex >= this->size) || !isNumeric)
		{
			std::cout << "Invalid index." << std::endl;
			std::cin.clear();
			continue;
		}
		else
			validInput = true;
	}
	Contact contact = contacts[contactIndex];
	std::cout << "Contact Information:" << std::endl;
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

bool isOnlySpaces(const std::string &str)
{
	for (size_t c = 0; c < str.size(); c++)
	{
		if (str[c] == ' ' || (str[c] >= 9 && str[c] <= 13) || str.empty())
			continue;
		else
			return true;
	}
	return false;
}

std::string getUserInput(const std::string &prompt, const std::string &errorMessage)
{
	std::string 	input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof() || !std::cin.good())
			exit(0);
		if (!isOnlySpaces(input) || input.empty())
		{
			std::cout << errorMessage << std::endl;
			std::cin.clear();
			continue;
		}
		else
		{
			std::cin.clear();
			return input;
		}
	}
}

std::string getUserInputNb(const std::string &prompt, const std::string &errorMessage)
{
	std::string	input;
	bool		isNumeric;

	isNumeric = true;
	while (true)
	{
		std::cout << prompt;
		std::cin.clear();
		std::getline(std::cin, input);
		if (std::cin.eof() || !std::cin.good())
			exit(0);
		for (size_t i = 0; i < input.length(); i++)
		{
			if (!isdigit(input[i]))
			{
				isNumeric = false;
				std::cin.clear();
				break;
			}
			isNumeric = true;
		}
		if (!isNumeric)
		{
			std::cout << "phone number takes only digits" << std::endl;
			std::cin.clear();
			continue;
		}
		if (!isOnlySpaces(input) || input.empty())
		{
			std::cout << errorMessage << std::endl;
			std::cin.clear();
			continue;
		}
		else
			return input;
	}
}

void PhoneBook::add()
{
	Contact	newContact;

	if (this->index >= this->max)
		this->index = (this->index) % this->max;
	newContact.setFirstName(getUserInput("Enter first name: ", "First name cannot be empty."));
	newContact.setLastName(getUserInput("Enter last name: ", "Last name cannot be empty."));
	newContact.setNickname(getUserInput("Enter nickname: ", "Nickname cannot be empty."));
	newContact.setPhoneNumber(getUserInputNb("Enter phone number: ", "phone number cannot be empty."));
	newContact.setDarkestSecret(getUserInput("Enter darkest secret: ", "darkest secret cannot be empty."));
	this->contacts[this->index] = newContact;
	this->index++;
	this->size++;
	if (this->size > this->max)
		this->size = this->max;
	std::cout << "Contact added successfully." << std::endl;
}