/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:48:21 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 15:20:34 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("contract"), is_signed(false), grade_sign(100), grade_exec(100)
{
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int grade_sign, int grade_exec) : name(name), is_signed(false), grade_sign(grade_sign), grade_exec(grade_exec)
{
    if (this->grade_sign < 1 || this->grade_exec < 1)
        throw AForm::GradeTooHighException();
    if (this->grade_sign > 150 || this->grade_exec > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &obj) : name(obj.name), grade_sign(obj.grade_sign), grade_exec(obj.grade_exec)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = obj;
}

AForm &AForm::operator=(const AForm &obj)
{
    std::cout << "AForm assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->is_signed = obj.is_signed;
    }
    return (*this);
}

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getIsSigned() const
{
    return (this->is_signed);
}

int AForm::getSignGrade() const
{
    return (this->grade_sign);
}

int AForm::getExecGrade() const
{
    return (this->grade_exec);
}

void AForm::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > this->grade_sign)
        throw AForm::GradeTooLowException();
    this->is_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("\033[31;1m The grade is too High!\033[0m");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("\033[31;1m The grade is too Low!\033[0m");
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return ("\033[31;1m The form is not signed!\033[0m");
}

std::ostream &operator<<(std::ostream &strm, AForm const &obj)
{
    strm << "Form " << obj.getName() << " is " << (obj.getIsSigned() ? "" : "not ") << "signed. Grade to sign: " << obj.getSignGrade() << ". Grade to execute: " << obj.getExecGrade();
    return (strm);
}