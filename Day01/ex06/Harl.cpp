/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:10:09 by lshail            #+#    #+#             */
/*   Updated: 2023/11/03 16:27:05 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

void Harl::complain(std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    
    void (Harl::*complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*complain[i])();
            return ;
        }
    }
}

void Harl::debug(void)
{
    std::cout << "\033[94;4m[ DEBUG ]\033[0m" << std::endl;
    std::cout << "I love having extra bacon for my " << std::endl;
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << " I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "\033[92;4m[ INFO ]\033[0m" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << " You didn’t put enough bacon in my burger! If you did," << std::endl;
    std::cout << " I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "\033[93;4m[ WARNING ]\033[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "\033[91;4m[ ERROR ]\033[0m" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

