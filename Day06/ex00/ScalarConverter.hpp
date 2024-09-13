/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:13:34 by lshail            #+#    #+#             */
/*   Updated: 2023/12/11 11:47:24 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

class ScalarConverter
{
public:
    ~ScalarConverter();
    ScalarConverter(ScalarConverter const &obj);
    ScalarConverter &operator=(ScalarConverter const &obj);

    static void convert(const std::string &str);

private:
    ScalarConverter();
    static bool is_char(const std::string &str);
    static bool handle_literals(const std::string &str);
    static bool is_printable_char(char c);
    static bool is_int(const std::string &str);
    static bool is_float(const std::string &str);
    static bool is_double(const std::string &str);
};

#endif