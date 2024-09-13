/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:48:18 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 15:20:47 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
    AForm();
    AForm(std::string name, int grade_sign, int grade_exec);
    virtual ~AForm();
    AForm(const AForm &obj);
    AForm &operator=(const AForm &obj);

    std::string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecGrade() const;

    void beSigned(const Bureaucrat &obj);

    virtual void execute(Bureaucrat const &executor) const = 0;
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

private:
    const std::string name;
    bool is_signed;
    const int grade_sign;
    const int grade_exec;
};

std::ostream &operator<<(std::ostream &strm, AForm const &obj);

#endif