/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:48:38 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 19:15:53 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Orthodox Canonical Form
ScavTrap::ScavTrap()
  : ClapTrap() {
  std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::~ScavTrap(){
  std::cout \
    << "ScavTrap " << name \
    << " destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
  : ClapTrap(src.name, src.hitPoints, src.energyPoints, src.attackDamage){
  std::cout \
    << "ScavTrap copy constructor" \
    << " from " << src.name \
    << " called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs){
  std::cout \
    << "ScavTrap assignation operator" \
    << " from " << rhs.name \
    << " called." << std::endl;
  if (this == &rhs)
    return *this;
  this->name = rhs.name;
  this->hitPoints = rhs.hitPoints;
  this->energyPoints = rhs.energyPoints;
  this->attackDamage = rhs.attackDamage;
  return *this;
}

// Optional constructor
ScavTrap::ScavTrap(std::string name)
  : ClapTrap(name, 100, 50, 20){
  std::cout \
    << "ScavTrap constructor called" \
    << "with the name of " << name \
    << std::endl;
  this->name = name;
  this->hitPoints = 100;
  this->energyPoints = 50;
  this->attackDamage = 20;
}

// Member functions
void ScavTrap::attack(std::string const &target){
  if (hitPoints == 0){
    std::cout \
      << "ScavTrap " << name \
      << " is already dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout \
      << "ScavTrap " << name \
      << " has no more energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "ScavTrap " << name \
      << " attacks " << target \
      << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
  }
}

void ScavTrap::guardGate(void){
  if (hitPoints == 0){
    std::cout \
      << name \
      << " is already dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout \
      << name \
      << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << name \
      << " have enterred in Gate keeper mode." << std::endl;
  }
}
