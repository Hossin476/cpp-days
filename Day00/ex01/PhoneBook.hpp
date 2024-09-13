/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:51:26 by lshail            #+#    #+#             */
/*   Updated: 2023/10/18 14:51:26 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP


#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook 
{
    public:
        PhoneBook();
        void    add();
        void    search();
    private:
        int     index;
        int     max;
        int     size;
        Contact contacts[8];
};

#endif