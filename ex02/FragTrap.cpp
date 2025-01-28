/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:25:02 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/28 19:21:09 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Orthodox Canonical Form
FragTrap::FragTrap()
  : ClapTrap(){
  std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::~FragTrap(){
  std::cout \
    << "FragTrap " << name \
    << " destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
  : ClapTrap(src){
  std::cout \
    << "FragTrap copy constructor" \
    << " from " << src.name \
    << " called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs){
  std::cout \
    << "FragTrap assignation operator" \
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
FragTrap::FragTrap(const std::string name)
  : ClapTrap(name, 100, 100, 30){
  std::cout \
    << "FragTrap " << name \
    << " constructor called." << std::endl;
  this->name = name;
  this->hitPoints = 100;
  this->energyPoints = 100;
  this->attackDamage = 30;
}

// Member functions
void FragTrap::attack(const std::string& target){
  if (hitPoints == 0){
    std::cout \
      << "FragTrap " << name \
      << " is already dead!" << std::endl;
    return;
  } else if (energyPoints == 0){
    std::cout \
      << "FragTrap" << name \
      << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "FragTrap " << name \
      << " attacks " << target \
      << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
  }
}

void FragTrap::highFivesGuys(void){
  std::cout \
    << name \
    << " Positive high fives request." << std::endl;
}
