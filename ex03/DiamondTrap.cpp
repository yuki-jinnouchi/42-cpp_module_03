/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:31:37 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 21:16:39 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Orthodox Canonical Form
DiamondTrap::DiamondTrap(){
  std::cout \
    << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout \
    << "DiamondTrap " << getName() \
    << " destructor called."  << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
  : ClapTrap(src){
  std::cout \
    << "DiamondTrap copy constructor" \
    << " from " << src.getName() \
    << " called." << std::endl;
  setName(src.getName());
  ClapTrap::setName(src.getName() + "_clap_name");
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs){
  std::cout \
    << "DiamondTrap assignation operator" \
    << " from " << rhs.getName() \
    << " called." << std::endl;
  if (this == &rhs)
    return *this;
  setName(rhs.getName());
  ClapTrap::setName(rhs.getName() + "_clap_name");
  setHitPoints(rhs.getHitPoints());
  setEnergyPoints(rhs.getEnergyPoints());
  setAttackDamage(rhs.getAttackDamage());
  return *this;
}

// Optional constructor
DiamondTrap::DiamondTrap(std::string name)
  : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(){
  std::cout \
    << "DiamondTrap constructor called" \
    << " with the name of " << name << std::endl;
  setName(name);
  ClapTrap::setName(name + "_clap_name");
  setHitPoints(FragTrap::getHitPoints());
  setEnergyPoints(ScavTrap::getEnergyPoints());
  setAttackDamage(FragTrap::getAttackDamage());
}

// Getters and Setters
std::string DiamondTrap::getName(void) const {
  return name;
}

void DiamondTrap::setName(std::string const name){
  this->name = name;
}

// Member functions
void DiamondTrap::attack(const std::string& target){
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) const {
  std::cout \
    << "My name is " << getName() << ", " \
    << "and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

