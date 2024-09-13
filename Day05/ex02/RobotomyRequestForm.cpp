/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:49:19 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 15:16:29 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Scholz")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    srand(time(NULL));
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() < 1)
        throw AForm::GradeTooHighException();
    std::cout << "Some drilling noises... Kaizoku Ou Ni Ore Wa Naru!!!!" << std::endl;
    if (rand() % 2)
        std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << this->target <<  " failed to robotomize 50% of the time" << std::endl;
}