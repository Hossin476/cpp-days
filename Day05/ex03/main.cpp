/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:12:27 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 21:10:19 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include "./Intern.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Intern stage;
        AForm *form ;
        Bureaucrat boss("boss", 1);
        Bureaucrat lkomissir("lkomissir", 150);
        
        form = stage.makeForm("RobotomyRequestForm", "lkomissir");
        boss.signForm(*form);
        std::cout << *form << std::endl;
        delete form;
        form = stage.makeForm("PresidentialPardonForm", "lwazir");
        lkomissir.signForm(*form);
        std::cout << *form << std::endl;
        delete form;
        form = stage.makeForm("ShrubberyCreationForm", "molSibir");
        std::cout << *form << std::endl;
        delete form;
        form = stage.makeForm("notfound", "lwalid");
        boss.signForm(*form);
        std::cout << *form << std::endl;
        delete form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}