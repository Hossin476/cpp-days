/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:55:56 by lshail            #+#    #+#             */
/*   Updated: 2024/04/30 15:49:52 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
#include <algorithm>
#include <stack>
#include <sstream>

class RPN
{
    public:
    RPN();
    RPN(const RPN &src);
    RPN &operator=(const RPN &src);
    ~RPN();
    void parse_expression(std::string str);
    private:
    std::stack<double> arr;
    std::string str;
};

#endif