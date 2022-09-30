/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:52:26 by ahamdy            #+#    #+#             */
/*   Updated: 2022/09/28 11:12:14 by ahamdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
    int n = 5;

    Zombie *zombie_n = zombieHorde(n , "zombiz");
    for (int i = 0 ; i < n; i++)
    {
        zombie_n[i].announce();
    }
    delete [] zombie_n; 
}