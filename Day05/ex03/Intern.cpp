/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:52:53 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 12:04:12 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &obj)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = obj;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &obj)
{
    std::cout << "Intern assignation operator called" << std::endl;
    if (this != &obj)
    {
    }
    return *this;
}

AForm *Intern::createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::createShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string formNames[3] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};  

    AForm *(Intern::*formFuncs[3])(std::string target) = {&Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm, &Intern::createShrubberyCreationForm};

    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*formFuncs[i])(target);
        }
    }
    throw Intern::FormNotFoundException();
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return "\033[31;1mThe Form was not found!\033[0m";
}