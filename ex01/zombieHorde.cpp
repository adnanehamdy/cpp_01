/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:25:18 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 11:04:11 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int n_index;

    Zombie *Zombie_n = new Zombie[N];
    for (n_index = 0 ; n_index < N ; n_index++)
    {
        Zombie_n[n_index].set_name(name);
    }
    return (Zombie_n);
}