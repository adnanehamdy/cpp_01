/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:50:15 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 09:51:05 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie_a = new Zombie;
    zombie_a->set_name(name);
    return (zombie_a);
}
