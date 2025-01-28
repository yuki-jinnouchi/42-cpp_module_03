/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:31:37 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 19:29:21 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Orthodox Canonical Form
DiamondTrap::DiamondTrap()
  : ClapTrap(), ScavTrap(), FragTrap(){
  std::cout \
    << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout \
    << "DiamondTrap " << name \
    << " destructor called."  << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
  : ClapTrap(src), ScavTrap(src), FragTrap(src){
  std::cout \
    << "DiamondTrap copy constructor" \
    << " from " << src.name \
    << " called." << std::endl;
  DiamondTrap::name = src.name;
  ClapTrap::name = src.name + "_clap_name";
  this->hitPoints = src.hitPoints;
  this->energyPoints = src.energyPoints;
  this->attackDamage = src.attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs){
  std::cout \
    << "DiamondTrap assignation operator" \
    << " from " << rhs.name \
    << " called." << std::endl;
  if (this == &rhs)
    return *this;
  DiamondTrap::name = rhs.name;
  ClapTrap::name = rhs.name + "_clap_name";
  this->hitPoints = rhs.hitPoints;
  this->energyPoints = rhs.energyPoints;
  this->attackDamage = rhs.attackDamage;
  return *this;
}

// Optional constructor
DiamondTrap::DiamondTrap(std::string name)
  : ClapTrap(name), ScavTrap(name), FragTrap(name) {
  std::cout \
    << "DiamondTrap constructor called" \
    << " with the name of " << name << std::endl;
  DiamondTrap::name = name;
  ClapTrap::name = name + "_clap_name";
  DiamondTrap::hitPoints = FragTrap::hitPoints;
  DiamondTrap::energyPoints = ScavTrap::energyPoints;
  DiamondTrap::attackDamage = FragTrap::attackDamage;
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
    << "My name is " << name << ", " \
    << "and my ClapTrap name is " << ClapTrap::name << std::endl;
}

