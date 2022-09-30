/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:17:08 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 16:35:03 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

std::string HumanA::getname()
{
	return (name);
}

void HumanA::setname(std::string name)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << WeaponA.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& Weapon) : WeaponA(Weapon)
{
	this->name = name;
}
