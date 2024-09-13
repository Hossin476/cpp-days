/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:10:14 by lshail            #+#    #+#             */
/*   Updated: 2023/10/29 12:48:04 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int get_switch(char *ar)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == ar)
        {
            return (i);
        }
    }
    return (-1);
}

void handle_switch(int switcher, Harl &harl)
{
    switch(switcher)
    {
        case 0:
            harl.complain("debug");
        case 1:
            harl.complain("info");
        case 2:
            harl.complain("warning");
        case 3:
            harl.complain("error");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

int main(int ac, char **av)
{
    Harl harl;
    if (ac != 2)
    {
        std::cout << "\033[39;4mInvalid Arguments\033[0m"  << std::endl;
        return (0);
    }
    else
    {
        int switcher = get_switch(av[1]);
        handle_switch(switcher, harl);
    }
    return (0);
}
