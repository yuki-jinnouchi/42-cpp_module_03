/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:25:02 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 21:19:20 by yjinnouc         ###   ########.fr       */
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
    << "FragTrap " << getName() \
    << " destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
  : ClapTrap(src){
  std::cout \
    << "FragTrap copy constructor" \
    << " from " << src.getName() \
    << " called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs){
  std::cout \
    << "FragTrap assignation operator" \
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
FragTrap::FragTrap(const std::string name)
  : ClapTrap(name){
  std::cout \
    << "FragTrap " << getName() \
    << " constructor called." << std::endl;
  setHitPoints(100);
  setEnergyPoints(100);
  setAttackDamage(30);
}

// Member functions
void FragTrap::attack(const std::string& target){
  if (getHitPoints() == 0){
    std::cout \
      << "FragTrap " << getName() \
      << " is already dead!" << std::endl;
    return;
  } else if (getEnergyPoints() == 0){
    std::cout \
      << "FragTrap" << getName() \
      << " has no energy points!" << std::endl;
    return;
  } else {
    std::cout \
      << "FragTrap " << getName() \
      << " attacks " << target \
      << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
}

void FragTrap::highFivesGuys(void){
  std::cout \
    << getName() \
    << " Positive high fives request." << std::endl;
}
