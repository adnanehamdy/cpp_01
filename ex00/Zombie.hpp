/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:43:15 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 10:22:23 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_hpp
#define Zombie_hpp

#include<iostream>

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