/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:49:13 by lshail            #+#    #+#             */
/*   Updated: 2023/12/03 17:30:34 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("Trump")
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) 
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return (*this);
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() < 1)
        throw AForm::GradeTooHighException();
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}