/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:03 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/25 22:37:32 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
  : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap default constructor called" \
      << " with the name of " << name << std::endl;
}

ClapTrap::~ClapTrap(){
  std::cout \
    << "ClapTrap " << name \
    << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
  : name(src.name), hitPoints(src.hitPoints), \
    energyPoints(src.energyPoints), attackDamage(src.attackDamage){
    std::cout \
      << "ClapTrap " << src.name \
      << " copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &lhs){
  std::cout \
    << "ClapTrap assignation operator " \
    << "from " << lhs.name \
    << " called" << std::endl;
  if (this == &lhs)
    return *this;
  this->name = lhs.name;
  this->hitPoints = lhs.hitPoints;
  this->energyPoints = lhs.energyPoints;
  this->attackDamage = lhs.attackDamage;
  return *this;
}

int ClapTrap::getHitPoints(){
  return this->hitPoints;
}

void ClapTrap::setHitPoints(int newHitPoints){
  this->hitPoints = newHitPoints;
}

int ClapTrap::getEnergyPoints(){
  return this->energyPoints;
}

void ClapTrap::setEnergyPoints(int newEnergyPoints){
  this->energyPoints = newEnergyPoints;
}

int ClapTrap::getAttackDamage(){
  return this->attackDamage;
}

void ClapTrap::setAttackDamage(int newAttackDamage){
  this->attackDamage = newAttackDamage;
}

std::string ClapTrap::getName(){
  return this->name;
}

void ClapTrap::setName(std::string newName){
  this->name = newName;
}

/*
When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points or
energy points left. However, since these exercises serve as an introduction, the ClapTrap
instances should not interact directly with one another, and the parameters will not refer
to another instance of ClapTrap.
*/

void ClapTrap::attack(const std::string& target){
  if (hitPoints == 0){
    std::cout \
      << "ClapTrap " << target \
      << " is dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout << "ClapTrap " << target << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "ClapTrap " << name \
      << " attacks " << target \
      << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
  }
}

void ClapTrap::takeDamage(unsigned int amount){
  if (hitPoints == 0){
    std::cout << "ClapTrap is already dead!" << std::endl;
    return;
  } else {
    int tookDamage = min(hitPoints, amount);
    hitPoints -= tookDamage;
    std::cout \
      << "ClapTrap " << name \
      << " took " << tookDamage << " points of damage!" << std::endl;
    if (hitPoints == 0){
      std::cout \
        << "ClapTrap" << name \
        << " is dead!" << std::endl;
    }
  }
}

void ClapTrap::beRepaired(unsigned int amount){
  if (hitPoints == 0){
    std::cout \
      << "ClapTrap " << name \
      << " is dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout \
      << "ClapTrap " << name \
      << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "ClapTrap " << name \
      << " be repaired " << amount << " points!" << std::endl;
    hitPoints += amount;
    energyPoints -= 1;
  }
}

int ClapTrap::min(int a, int b){
  return a < b ? a : b;
}
