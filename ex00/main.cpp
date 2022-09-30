/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:52:26 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 10:10:34 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main(void)
{
    Zombie *zombi_a = newZombie("first");
    zombi_a->announce();
}