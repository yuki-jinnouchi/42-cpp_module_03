/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:10 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/26 16:26:33 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int main()
{
    std::cout << "# Set up" << std::endl;

    ClapTrap ct01("Alice");
    ClapTrap ct02("Bob");
    ClapTrap ct03(ct02);
    ClapTrap ct04("Charlie");

    ct03 = ct04;
    std::cout << std::endl;

    std::cout << "# Battle begins!" << std::endl;
    ct02.attack("Alice");
    ct01.takeDamage(ct02.getAttackDamage());
    ct01.beRepaired(5);
    ct01.attack("Bob");
    ct02.takeDamage(ct01.getAttackDamage());
    std::cout << std::endl;

    std::cout << "# Battle results:" << std::endl;
    std::cout \
        << "ClapTrap ct01 " << ct01.getName() \
        << " hit points: " << ct01.getHitPoints() << std::endl;
    std::cout \
        << "ClapTrap ct01 " << ct01.getName() \
        << " energy points: " << ct01.getEnergyPoints() << std::endl;
    std::cout \
        << "ClapTrap ct02 " << ct02.getName() \
        << " hit points: " << ct02.getHitPoints() << std::endl;
    std::cout \
        << "ClapTrap ct02 " << ct02.getName() \
        << " energy points: " << ct02.getEnergyPoints() << std::endl;
    std::cout << std::endl;

    return (0);
}
