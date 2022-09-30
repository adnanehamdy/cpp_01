/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:10:18 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/29 14:26:13 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_hpp
#define Weapon_hpp

#include<iostream>

class Weapon {
	private :
		std::string type;
	public :
	Weapon(std::string type);
	std::string getType() const;
	void setType(std::string type);
};

#endif