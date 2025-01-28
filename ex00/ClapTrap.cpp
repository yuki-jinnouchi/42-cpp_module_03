/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:03 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 19:14:19 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

// Orthodox Canonical Form
ClapTrap::ClapTrap()
  : hitPoints(10), energyPoints(10), attackDamage(0){
  std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::~ClapTrap(){
  std::cout \
    << "ClapTrap " << name \
    << " destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
  : name(src.name), hitPoints(src.hitPoints), \
    energyPoints(src.energyPoints), attackDamage(src.attackDamage){
  std::cout \
    << "ClapTrap copy constructor" \
    << " from " << name \
    << " called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &lhs){
  std::cout \
    << "ClapTrap assignation operator " \
    << "from " << lhs.name \
    << " called." << std::endl;
  if (this == &lhs)
    return *this;
  name = lhs.name;
  hitPoints = lhs.hitPoints;
  energyPoints = lhs.energyPoints;
  attackDamage = lhs.attackDamage;
  return *this;
}

// Optional constructor
ClapTrap::ClapTrap(const std::string name)
  : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout \
      << "ClapTrap constructor called" \
      << " with the name of " << name << std::endl;
}

ClapTrap::ClapTrap(const std::string name, const int hitPoints, const int energyPoints, const int attackDamage)
  : name(name), hitPoints(hitPoints), energyPoints(energyPoints), attackDamage(attackDamage){
    std::cout \
      << "ClapTrap constructor called" \
      << " with the name of " << name << std::endl;
  }

// Getters
std::string ClapTrap::getName() const {
  return name;
}

int ClapTrap::getHitPoints() const {
  return hitPoints;
}

int ClapTrap::getEnergyPoints() const {
  return energyPoints;
}

int ClapTrap::getAttackDamage() const {
  return attackDamage;
}

// Member functions
/*
When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points or
energy points left. However, since these exercises serve as an introduction, the ClapTrap
instances should not interact directly with one another, and the parameters will not refer
to another instance of ClapTrap.
*/

void ClapTrap::attack(const std::string &target){
  if (hitPoints == 0){
    std::cout \
      << "ClapTrap " << name \
      << " is already dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout \
      << "ClapTrap " << name \
      << " has no more energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "ClapTrap " << name \
      << " attacks " << target \
      << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
  }
}

void ClapTrap::takeDamage(unsigned int amount){
  if (hitPoints == 0){
    std::cout \
      << name \
      << " is already dead!" << std::endl;
    return;
  } else {
    int tookDamage = min(hitPoints, amount);
    hitPoints -= tookDamage;
    std::cout \
      << name \
      << " took " << tookDamage << " points of damage!" << std::endl;
    if (hitPoints == 0){
      std::cout \
        << name \
        << " is dead!" << std::endl;
    }
  }
}

void ClapTrap::beRepaired(unsigned int amount){
  if (hitPoints == 0){
    std::cout \
      << name \
      << " is already  dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout \
      << name \
      << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << name \
      << " be repaired " << amount << " points!" << std::endl;
    hitPoints += amount;
    energyPoints--;
  }
}

// Helper functions
int ClapTrap::min(int const a, int const b) const {
  return a < b ? a : b;
}
