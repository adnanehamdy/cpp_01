/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:51:23 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 09:52:09 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie_b;

    zombie_b.set_name(name);
    zombie_b.announce();
}
