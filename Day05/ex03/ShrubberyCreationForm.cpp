/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:48:15 by lshail            #+#    #+#             */
/*   Updated: 2023/12/18 18:05:55 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Xi Jinping")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() < 1)
        throw AForm::GradeTooHighException();

    std::ofstream ofs(this->target + "_shrubbery");

    if (!ofs.is_open())
        return;
    ofs << "      /\\      " << std::endl;
    ofs << "     /\\*\\     " << std::endl;
    ofs << "    /\\O\\*\\    " << std::endl;
    ofs << "   /*/\\/\\/\\   " << std::endl;
    ofs << "  /\\O\\/\\*\\/\\  " << std::endl;
    ofs << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    ofs << "      ||      " << std::endl;
    ofs << "      ||      " << std::endl;
    ofs << "      ||      " << std::endl;
    ofs << std::endl;
    ofs.close();
}