/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:43:05 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 10:20:44 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_hpp
#define Zombie_hpp

#include<iostream>
#include "Zombie.hpp"

class Zombie{
    private :
    std::string name;

    public :
    Zombie(void) {}
    ~Zombie();
    std::string get_name();
    void set_name(std::string name);
    void announce(void);
  
};

#endif