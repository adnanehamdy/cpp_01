/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:43:05 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 10:09:17 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name(void)
{
    return (Zombie::name);
}

void Zombie::set_name(std::string name)
{
    this->name = name;    
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}
