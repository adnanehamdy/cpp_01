/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:17:43 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 17:01:29 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_hpp
#define HumanA_hpp

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string	name;
        Weapon&      WeaponA;
    public :
	    HumanA(std::string name, Weapon& Weapon);
	    std::string getname();
	    void setname(std::string);
	    void attack();
};

#endif
