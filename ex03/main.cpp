/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:10 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 19:22:52 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

// Test Code for DiamondTrap
int main()
{
    std::cout << "# Set up" << std::endl;
    DiamondTrap ct01("Alice");
    DiamondTrap ct02("Bob") ;
    DiamondTrap ct03(ct02);
    DiamondTrap ct04("Charlie");
    DiamondTrap ct05;
    ct05 = ct04;
    std::cout << std::endl;

    std::cout << "# Battle begins!" << std::endl;
    ct01.whoAmI();
    ct01.highFivesGuys();
    ct01.guardGate();
    ct01.attack("Enemy");
    ct01.takeDamage(5);
    ct01.beRepaired(3);
    ct03.whoAmI();
    ct03.highFivesGuys();
    ct03.guardGate();
    ct03.attack("Enemy");
    ct03.takeDamage(5);
    ct03.beRepaired(3);
    ct05.whoAmI();
    ct05.highFivesGuys();
    ct05.guardGate();
    ct05.attack("Enemy");
    ct05.takeDamage(5);
    ct05.beRepaired(3);
    std::cout << std::endl;

    std::cout << "# Battle results:" << std::endl;
    std::cout \
        << "DiamondTrap ct01 " << ct01.getName() \
        << " hit points: " << ct01.getHitPoints() \
        << " energy points: " << ct01.getEnergyPoints() \
        << std::endl;
    std::cout \
        << "DiamondTrap ct02 " << ct02.getName() \
        << " hit points: " << ct02.getHitPoints() \
        << " energy points: " << ct02.getEnergyPoints() \
        << std::endl;
    std::cout \
        << "DiamondTrap ct03 " << ct03.getName() \
        << " hit points: " << ct03.getHitPoints() \
        << " energy points: " << ct03.getEnergyPoints() \
        << std::endl;
    std::cout \
        << "DiamondTrap ct04 " << ct04.getName() \
        << " hit points: " << ct04.getHitPoints() \
        << " energy points: " << ct04.getEnergyPoints() \
        << std::endl;
    std::cout \
        << "DiamondTrap ct05 " << ct05.getName() \
        << " hit points: " << ct05.getHitPoints() \
        << " energy points: " << ct05.getEnergyPoints() \
        << std::endl;
    std::cout << std::endl;

    return (0);
}
