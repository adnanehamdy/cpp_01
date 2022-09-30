/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:52:24 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 17:16:03 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

std::string HumanB::getname()
{
	return (name);
}

void HumanB::setname(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << WeaponB->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->WeaponB = &Weapon;
}
