/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:52:56 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 12:01:09 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "./AForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &obj);
    ~Intern();
    Intern &operator=(const Intern &obj);

    AForm *makeForm(std::string formName, std::string target);

    AForm *createShrubberyCreationForm(std::string target);
    AForm *createRobotomyRequestForm(std::string target);
    AForm *createPresidentialPardonForm(std::string target);
    
    class FormNotFoundException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
};

#endif