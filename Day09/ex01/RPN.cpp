/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:55:58 by lshail            #+#    #+#             */
/*   Updated: 2024/04/30 15:50:32 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &src)
{
    *this = src;
}

RPN &RPN::operator=(const RPN &src)
{
    if (this != &src)
    {
        this->arr = src.arr;
    }
    return *this;
}

RPN::~RPN()
{
}

void RPN::parse_expression(std::string str)
{
    std::stringstream ss(str);
    std::string token;

    while (ss >> token)
    {
        if (std::isdigit(token[0]) && token.size() < 2)
        {
            std::istringstream iss(token);
            int value;
            iss >> value;
            arr.push(value);
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (arr.size() < 2)
            {
                std::cout << "\033[31;1mError\033[0m" << std::endl;
                return;
            }
            double op2 = arr.top();
            arr.pop();
            double op1 = arr.top();
            arr.pop();
            if (token == "+")
                arr.push(op1 + op2);
            else if (token == "-")
                arr.push(op1 - op2);
            else if (token == "*")
                arr.push(op1 * op2);
            else if (token == "/")
            {
                if (op2 == 0)
                {
                    std::cout << "\033[31;1mError\033[0m" << std::endl;
                    return;
                }
                arr.push(op1 / op2);
            }
        }
        else
        {
            std::cout << "\033[31;1mError\033[0m" << std::endl;
            return;
        }
    }
    if (arr.size() != 1)
    {
        std::cout << "\033[31;1mError\033[0m" << std::endl;
        return;
    }
    std::cout << "Result: " << arr.top() << std::endl;
}