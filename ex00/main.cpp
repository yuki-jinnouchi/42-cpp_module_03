/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:10 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 18:04:15 by yjinnouc         ###   ########.fr       */
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
    ClapTrap ct05;
    ct05 = ct04;
    std::cout << std::endl;

    std::cout << "# Battle begins!" << std::endl;
    ct01.attack("Enemy");
    ct01.takeDamage(5);
    ct01.beRepaired(3);
    ct03.attack("Enemy");
    ct03.takeDamage(5);
    ct03.beRepaired(3);
    ct05.attack("Enemy");
    ct05.takeDamage(5);
    ct05.beRepaired(3);
    std::cout << std::endl;

    std::cout << "# Battle results:" << std::endl;
    std::cout \
        << "ct01: " << ct01.getName() \
        << ", hit points: " << ct01.getHitPoints() \
        << ", energy points: " << ct01.getEnergyPoints() \
        << ", attack damage: " << ct01.getAttackDamage() \
        << std::endl;
    std::cout \
        << "ct02: " << ct02.getName() \
        << ", hit points: " << ct02.getHitPoints() \
        << ", energy points: " << ct02.getEnergyPoints() \
        << ", attack damage: " << ct02.getAttackDamage() \
        << std::endl;
    std::cout \
        << "ct03: " << ct03.getName() \
        << ", hit points: " << ct03.getHitPoints() \
        << ", energy points: " << ct03.getEnergyPoints() \
        << ", attack damage: " << ct03.getAttackDamage() \
        << std::endl;
    std::cout \
        << "ct04: " << ct04.getName() \
        << ", hit points: " << ct04.getHitPoints() \
        << ", energy points: " << ct04.getEnergyPoints() \
        << ", attack damage: " << ct04.getAttackDamage() \
        << std::endl;
    std::cout \
        << "ct05: " << ct05.getName() \
        << ", hit points: " << ct05.getHitPoints() \
        << ", energy points: " << ct05.getEnergyPoints() \
        << ", attack damage: " << ct05.getAttackDamage() \
        << std::endl;
    std::cout << std::endl;

    return (0);
}
