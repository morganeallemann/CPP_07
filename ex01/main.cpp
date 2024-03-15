/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/17 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void iterone(int elem) {
    std::cout << elem + 1 << " ";
}

int main(){

	int     tab[10] = {0,1,2,3,4,5,6,7,8,9};
	char	tab2[5] = {'a', 'b', 'c', 'd', 'e'};

	iter(tab, 10, iterone);
	std::cout << std::endl;
	iter(tab2, 5, printelem);
	std::cout << std::endl;
}