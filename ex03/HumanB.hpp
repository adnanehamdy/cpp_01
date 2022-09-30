/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:52:46 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 17:16:09 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HumanB_hpp
#define HumanB_hpp

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string	name;
        Weapon*      WeaponB;
    public :
	    HumanB(std::string name);
	    std::string getname();
	    void setname(std::string);
        void setWeapon(Weapon &Weapon);
	    void attack();
};

#endif

