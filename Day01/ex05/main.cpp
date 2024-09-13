/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:58:15 by lshail            #+#    #+#             */
/*   Updated: 2023/10/28 14:44:29 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main()
{
    Harl harl;
    
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    return (0);
}