/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:58:10 by lshail            #+#    #+#             */
/*   Updated: 2023/10/30 18:14:16 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl was initiated" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl was initiated" << std::endl;
}

void Harl::debug()
{
    std::cout << "\033[96;4mDEBUG\033[0m" << std::endl;
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.";
    std::cout << " I really do!" << std::endl;
}
void Harl::info()
{
    std::cout << "\033[92;4mINFO\033[0m" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << " You didn’t put enough bacon in my burger! If you did,";
    std::cout << " I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "\033[93;4mWARNING\033[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << " I’ve been coming for years whereas you started working";
    std::cout << " here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "\033[91;4mERROR\033[0m" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};

    void (Harl::*complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*complain[i])();
            return;
        }
    }
}