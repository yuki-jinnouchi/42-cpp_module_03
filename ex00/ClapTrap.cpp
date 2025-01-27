/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:03 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 21:17:11 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

// Orthodox Canonical Form
ClapTrap::ClapTrap(){
  std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::~ClapTrap(){
  std::cout \
    << "ClapTrap " << getName() \
    << " destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
  : name(src.name), hitPoints(src.hitPoints), \
    energyPoints(src.energyPoints), attackDamage(src.attackDamage){
  std::cout \
    << "ClapTrap copy constructor" \
    << " from " << src.getName() \
    << " called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &lhs){
  std::cout \
    << "ClapTrap assignation operator " \
    << "from " << lhs.name \
    << " called." << std::endl;
  if (this == &lhs)
    return *this;
  setName(lhs.name);
  setHitPoints(lhs.hitPoints);
  setEnergyPoints(lhs.energyPoints);
  setAttackDamage(lhs.attackDamage);
  return *this;
}

// Optional constructor
ClapTrap::ClapTrap(const std::string name)
  : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout \
      << "ClapTrap default constructor called" \
      << " with the name of " << name << std::endl;
}

// Getters and Setters
int ClapTrap::getHitPoints(void) const {
  return this->hitPoints;
}

void ClapTrap::setHitPoints(int const newHitPoints){
  this->hitPoints = newHitPoints;
}

int ClapTrap::getEnergyPoints(void) const {
  return this->energyPoints;
}

void ClapTrap::setEnergyPoints(int const newEnergyPoints){
  this->energyPoints = newEnergyPoints;
}

int ClapTrap::getAttackDamage(void) const {
  return this->attackDamage;
}

void ClapTrap::setAttackDamage(int const newAttackDamage){
  this->attackDamage = newAttackDamage;
}

std::string ClapTrap::getName(void) const {
  return this->name;
}

void ClapTrap::setName(std::string const newName){
  this->name = newName;
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
      << "ClapTrap " << getName() \
      << " is already dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout \
      << "ClapTrap " << getName() \
      << " has no more energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "ClapTrap " << getName() \
      << " attacks " << target \
      << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
}

void ClapTrap::takeDamage(unsigned int amount){
  if (hitPoints == 0){
    std::cout \
      << getName() \
      << " is already dead!" << std::endl;
    return;
  } else {
    int tookDamage = min(hitPoints, amount);
    hitPoints -= tookDamage;
    std::cout \
      << getName() \
      << " took " << tookDamage << " points of damage!" << std::endl;
    if (hitPoints == 0){
      std::cout \
        << getName() \
        << " is dead!" << std::endl;
    }
  }
}

void ClapTrap::beRepaired(unsigned int amount){
  if (hitPoints == 0){
    std::cout \
      << getName() \
      << " is already  dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout \
      << getName() \
      << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << getName() \
      << " be repaired " << amount << " points!" << std::endl;
    setHitPoints(getHitPoints() + amount);
    setEnergyPoints(getEnergyPoints() - 1);
  }
}

// Helper functions
int ClapTrap::min(int const a, int const b) const {
  return a < b ? a : b;
}
