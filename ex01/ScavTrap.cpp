/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:48:38 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 21:17:34 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Orthodox Canonical Form
ScavTrap::ScavTrap(){
  std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::~ScavTrap(){
  std::cout \
    << "ScavTrap " << getName() \
    << " destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
  : ClapTrap(src){
  std::cout \
    << "ScavTrap copy constructor" \
    << " from " << src.getName() \
    << " called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs){
  std::cout \
    << "ScavTrap assignation operator" \
    << " from " << rhs.getName() \
    << " called." << std::endl;
  if (this == &rhs)
    return *this;
  setName(rhs.getName());
  setHitPoints(rhs.getHitPoints());
  setEnergyPoints(rhs.getEnergyPoints());
  setAttackDamage(rhs.getAttackDamage());
  return *this;
}

// Optional constructor
ScavTrap::ScavTrap(std::string name)
  : ClapTrap(name) {
  std::cout \
    << "ScavTrap constructor called" \
    << "with the name of " << getName() \
    << std::endl;
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
}

// Member functions
void ScavTrap::attack(std::string const &target){
  if (getHitPoints() == 0){
    std::cout \
      << "ScavTrap " << getName() \
      << " is already dead!" << std::endl;
    return;
  } else if (getEnergyPoints() == 0){
    std::cout \
      << "ScavTrap " << getName() \
      << " has no more energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "ScavTrap " << getName() \
      << " attacks " << target \
      << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
}

void ScavTrap::guardGate(void){
  if (getHitPoints() == 0){
    std::cout \
      << getName() \
      << " is already dead!" << std::endl;
    return;
  } else if (getEnergyPoints() == 0){
    std::cout \
      << getName() \
      << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << getName() \
      << " have enterred in Gate keeper mode." << std::endl;
  }
}
