/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:13:31 by lshail            #+#    #+#             */
/*   Updated: 2024/01/03 13:29:09 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    // std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    // std::cout << "Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &obj)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &obj)
    {
    }
    return (*this);
}

bool ScalarConverter::is_char(const std::string &str)
{
    return str.size() == 3 && is_printable_char(str[1])  && str.front() == '\'' && str.back() == '\'';
};

bool ScalarConverter::is_printable_char(char c)
{
    return c >= 32 && c <= 126; 
}

bool ScalarConverter::is_float(const std::string &str)
{
    int fCount = 0;
    int dotCount = 0;
    int plusCount = 0;
    int minusCount = 0;

    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] == 'f')
            fCount++;
        if (str[i] == '.')
            dotCount++;
        if (str[i] == '+')
            plusCount++;
        if (str[i] == '-')
            minusCount++;
    }
    if (fCount != 1 || dotCount != 1 || str[0] == '.' || str[str.size() - 1] != 'f' || plusCount > 1 || minusCount > 1 || (str[0] != '+' && str[0] != '-' && (plusCount == 1 || minusCount == 1)))
        return false;
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] != '.' && str[i] != 'f' && str[i] != '+' && str[i] != '-' && (str[i] < '0' || str[i] > '9'))
            return false;
    }

    return true;
}

bool ScalarConverter::is_double(const std::string &str)
{
    int dotCount = 0;
    int plusCount = 0;
    int minusCount = 0;

    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] == '.')
            dotCount++;
        if (str[i] == '+')
            plusCount++;
        if (str[i] == '-')
            minusCount++;
    }
    if (dotCount != 1 || str[0] == '.' || plusCount > 1 || minusCount > 1 || (str[0] != '+' && str[0] != '-' && (plusCount == 1 || minusCount == 1)))
        return false;
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] != '.' && str[i] != '+' && str[i] != '-' && (str[i] < '0' || str[i] > '9'))
            return false;
    }

    return true;
}

bool ScalarConverter::is_int(const std::string &str)
{
    int plusCount = 0;
    int minusCount = 0;

    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] == '+')
            plusCount++;
        if (str[i] == '-')
            minusCount++;
    }
    if (plusCount > 1 || minusCount > 1 || (str[0] != '+' && str[0] != '-' && (plusCount == 1 || minusCount == 1)) )
        return false;
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] != '+' && str[i] != '-' && (str[i] < '0' || str[i] > '9'))
            return false;
    }

    return true;
}

bool ScalarConverter::handle_literals(const std::string &str)
{
    if (str == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return true;
    }
    if (str == "inf" || str == "+inf" || str == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str << std::endl;
        return true;
    }
    if (str == "-inff" || str == "+inff" || str == "inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str << std::endl;
        return true;
    }
    return false;
}

void ScalarConverter::convert(const std::string &str)
{
    if (str.empty())
    {
        std::cerr << "\033[31;1mParsing Error!!\033[0m" << std::endl;
        return;
    }
    if (handle_literals(str))
        return;
        if (is_char(str))
        {
            char c = str[1];
            std::cout << "char: '" << c << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(c) << std::endl;
            std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        }
        else if (is_int(str))
        {
            std::stringstream ss(str);
            long long num;
            ss >> num;
            std::cout << "char: ";
            if (num >= 32 && num <= 126)
                std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
            if (num > INT_MAX || num < INT_MIN)
                std::cout << "int: impossible" << std::endl;
            else
                std::cout << "int: " << static_cast<int>(num) << std::endl;
            std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
        }
        else if (is_float(str))
        {
            std::stringstream ss;
            ss << str.substr(0, str.size() - 1);
            float num;
            ss >> num;
            std::cout << "char: ";
            if (num >= 32 &&  num <= 126)
                std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
            std::cout << "int: ";
            if (num > INT_MAX || num < INT_MIN)
                std::cout << "impossible" << std::endl;
            else
                std::cout << static_cast<int>(num) << std::endl;
            std::cout << "float: " << static_cast<float>(num) << (static_cast<int>(num) == static_cast<double>(num) ? ".0f" : "f" ) << std::endl;
            std::cout << "double: " << static_cast<double>(num) << (static_cast<int>(num) == static_cast<double>(num) ? ".0" : "" ) << std::endl;
        }
        else if (is_double(str))
        {
            std::stringstream ss(str);
            double num;
            ss >> num;
            std::cout << "char: ";
            if (num >= 32 && num <= 126)
                std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
            std::cout << "int: ";
            if (num > INT_MAX || num < INT_MIN)
                std::cout << "impossible" << std::endl;
            else
                std::cout << static_cast<int>(num) << std::endl;
            std::cout << "float: " << static_cast<float>(num) << (static_cast<int>(num) == static_cast<double>(num) ? ".0f" : "f" ) << std::endl;
            std::cout << "double: " << static_cast<double>(num) << (static_cast<int>(num) == static_cast<double>(num) ? ".0" : "" ) << std::endl;
        }
        else
            std::cerr << "\033[31;1mParsing Error!!\033[0m" << std::endl;
}