/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:10 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 20:40:00 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

// Test Code for ScavTrap
int main()
{
    std::cout << "# Set up" << std::endl;
    FragTrap ct01("Alice");
    FragTrap ct02("Bob") ;
    FragTrap ct03(ct02);
    FragTrap ct04("Charlie");
    FragTrap ct05;
    ct05 = ct04;
    std::cout << std::endl;

    std::cout << "# Battle begins!" << std::endl;
    ct01.attack("Enemy");
    ct01.takeDamage(5);
    ct01.beRepaired(3);
    ct01.highFivesGuys();
    ct03.attack("Enemy");
    ct03.takeDamage(5);
    ct03.highFivesGuys();
    ct03.beRepaired(3);
    ct05.attack("Enemy");
    ct05.highFivesGuys();
    ct05.takeDamage(5);
    ct05.beRepaired(3);
    std::cout << std::endl;

    std::cout << "# Battle results:" << std::endl;
    std::cout \
        << "ScavTrap ct01 " << ct01.getName() \
        << " hit points: " << ct01.getHitPoints() \
        << " energy points: " << ct01.getEnergyPoints() \
        << std::endl;
    std::cout \
        << "ScavTrap ct02 " << ct02.getName() \
        << " hit points: " << ct02.getHitPoints() \
        << " energy points: " << ct02.getEnergyPoints() \
        << std::endl;
    std::cout \
        << "ScavTrap ct03 " << ct03.getName() \
        << " hit points: " << ct03.getHitPoints() \
        << " energy points: " << ct03.getEnergyPoints() \
        << std::endl;
    std::cout \
        << "ScavTrap ct04 " << ct04.getName() \
        << " hit points: " << ct04.getHitPoints() \
        << " energy points: " << ct04.getEnergyPoints() \
        << std::endl;
    std::cout \
        << "ScavTrap ct05 " << ct05.getName() \
        << " hit points: " << ct05.getHitPoints() \
        << " energy points: " << ct05.getEnergyPoints() \
        << std::endl;
    std::cout << std::endl;

    return (0);
}
