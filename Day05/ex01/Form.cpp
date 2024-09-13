/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:11:53 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 15:20:18 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form() : name("contract"), is_signed(false), grade_sign(5), grade_exec(3)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int grade_sign, int grade_exec) : name(name), is_signed(false), grade_sign(grade_sign), grade_exec(grade_exec)
{
    if (this->grade_sign < 1 || this->grade_exec < 1)
        throw Form::GradeTooHighException();
    if (this->grade_sign > 150 || this->grade_exec > 150)
        throw Form::GradeTooLowException();
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &obj) : name(obj.name), grade_sign(obj.grade_sign), grade_exec(obj.grade_exec)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = obj;
}

Form &Form::operator=(const Form &obj)
{
    std::cout << "Form assignement operator called" << std::endl;
    if (this != &obj)
    {
        this->is_signed = obj.is_signed;
    }
    return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("\033[31;1m The grade is too High to sign!\033[0m");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("\033[31;1m The grade is too Low to sign!\033[0m");
}

int Form::getSignGrade() const
{
    return (this->grade_sign);
}

int Form::getExecGrade() const
{
    return (this->grade_exec);
}

std::string Form::getName() const
{
    return (this->name);
}

int Form::getIsSigned() const
{
    return (this->is_signed);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->grade_sign)
        throw Form::GradeTooLowException();
    this->is_signed = true;
}

std::ostream &operator<<(std::ostream &strm, const Form &obj)
{
    strm << "Form " << obj.getName() << " is " << (obj.getIsSigned() ? "" : "not ") << "signed. Grade to sign: " << obj.getSignGrade() << ". Grade to execute: " << obj.getExecGrade();
    return strm;
}