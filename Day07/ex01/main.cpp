/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshail <lshail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:05:07 by lshail            #+#    #+#             */
/*   Updated: 2023/12/17 11:55:12 by lshail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void print(T &x)
{
  std::cout << x << std::endl;
  return;
}

int main()
{
  int tab[] = {0, 1, 2, 3, 4};
  float floatTab[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  char charTab[] = {'a', 'b', 'c', 'd', 'e'};

  ::iter(tab, 5, print<int>);
  ::iter(floatTab, 5, print<float>);
  ::iter(charTab, 5, print<char>);

  return 0;
}
