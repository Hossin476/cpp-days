/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:49:45 by lshail            #+#    #+#             */
/*   Updated: 2024/03/06 20:42:43 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int ac, char **av)
{
    RPN rpn;
    if (ac != 2)
    {
        std::cout << "\033[31;1mUsage: ./RPN <expression> \033[0m" << std::endl;
        return 1;
    }
    rpn.parse_expression(av[1]);
    return 0;
}