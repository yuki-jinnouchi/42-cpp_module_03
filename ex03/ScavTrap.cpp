/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:48:38 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/26 16:18:43 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Orthodox Canonical Form
ScavTrap::ScavTrap()
  : ClapTrap(){
  std::cout \
    << "ScavTrap " << getName() \
    << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
  std::cout \
    << "ScavTrap " << getName() \
    << " destructor called" << std::endl;
}

// Optional constructor
ScavTrap::ScavTrap(std::string name)
  : ClapTrap(name) {
  std::cout \
    << "ScavTrap " << name \
    << " constructor called" << std::endl;
  this->setHitPoints(100);
  this->setEnergyPoints(50);
  this->setAttackDamage(20);
}

// Member functions
void ScavTrap::attack(std::string const &target){
  if (getHitPoints() == 0){
    std::cout \
      << "ClapTrap " << target \
      << " is already dead!" << std::endl;
    return;
  } else if (getEnergyPoints() == 0){
    std::cout << "ClapTrap " << target << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "ScavTrap " << getName() \
      << " attacks " << target \
      << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
}

void ScavTrap::guardGate(void)
{
  if (getHitPoints() == 0){
    std::cout \
      << "ScavTrap " << getName() \
      << " is already dead!" << std::endl;
    return;
  } else if (getEnergyPoints() == 0){
    std::cout \
      << "ScavTrap " << getName() \
      << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "ScavTrap " << getName() \
      << " have enterred in Gate keeper mode" << std::endl;
  }
}


