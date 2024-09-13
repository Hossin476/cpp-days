/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:11:50 by lshail            #+#    #+#             */
/*   Updated: 2023/12/05 15:20:10 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
public:
    Form();
    Form(std::string name, int grade_sign, int grade_exec);
    ~Form();
    Form(const Form &obj);
    Form &operator=(const Form &obj);

    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    int getIsSigned() const;

    void beSigned(const Bureaucrat &bureaucrat);

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

private:
    const std::string name;
    bool is_signed;
    const int grade_sign;
    const int grade_exec;
};

std::ostream &operator<<(std::ostream &strm, const Form &obj);

#endif