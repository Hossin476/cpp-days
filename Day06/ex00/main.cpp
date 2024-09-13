/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:53:36 by lshail            #+#    #+#             */
/*   Updated: 2023/12/11 19:14:23 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "\033[33;1mUsage: ./convert <literal>\033[0m" << std::endl;
        return 1;
    }

    ScalarConverter::convert(argv[1]);
    return 0;
}
