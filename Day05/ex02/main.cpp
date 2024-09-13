/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:12:27 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 15:17:08 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat b1("B1", 146);
        ShrubberyCreationForm f1("f1");
        b1.signForm(f1);
        b1.executeForm(f1);
        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b2("B2", 10);
        RobotomyRequestForm f2("f2");
        b2.signForm(f2);
        b2.executeForm(f2);
        std::cout << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b3("B3", 5);
        PresidentialPardonForm f3("f3");
        b3.signForm(f3);
        b3.executeForm(f3);
        std::cout << f3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}