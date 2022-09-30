/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:11:13 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 11:22:13 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(void)
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

	//print addresses
    std::cout << "var address : " << &var << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl;
    std::cout << "stringREF address: " << &stringREF << std::endl;

	//print values
	std::cout << "var : " << var << std::endl;
    std::cout << "stringPTR : " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;
	
}