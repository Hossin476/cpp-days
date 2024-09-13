/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:53:29 by lshail            #+#    #+#             */
/*   Updated: 2023/12/03 13:29:07 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("lmo9ata3a"), grade(100)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    if (this != &obj)
    {
        this->grade = obj.grade;
    }
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("\033[31;1m The grade is too High!\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("\033[31;1m The grade is too Low!\033[0m");
}

void Bureaucrat::incGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

std::ostream &operator<<(std::ostream &strm, const Bureaucrat &obj)
{
    strm << obj.getName() << ", bureaucrat grade " << obj.getGrade();

    return (strm);
}