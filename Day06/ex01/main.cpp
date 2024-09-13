/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:12:21 by lshail            #+#    #+#             */
/*   Updated: 2023/12/13 17:06:50 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data* data = new Data;
    data->s1 = "no tengo";
    data->n = 10;
    data->s2 = "dinero";

    uintptr_t raw = Serializer::serialize(data);
    Data* data2 = Serializer::deserialize(raw);

    std::cout << "data->s1: " << data->s1 << std::endl;
    std::cout << "data->n: " << data->n << std::endl;
    std::cout << "data->s2: " << data->s2 << std::endl;
    std::cout << "data2->s1: " << data2->s1 << std::endl;
    std::cout << "data2->n: " << data2->n << std::endl;
    std::cout << "data2->s2: " << data2->s2 << std::endl;
    delete data;
    return (0);
}