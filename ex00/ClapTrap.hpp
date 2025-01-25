/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:07 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/25 22:38:06 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

/*
It will be called ClapTrap and will have the following private attributes initialized
  to the values specified in brackets:
• Name, which is passed as parameter to a constructor
• Hit points (10), represent the health of the ClapTrap
• Energy points (10)
• Attack damage (0)

Add the following public member functions so the ClapTrap looks more realistic:
• void attack(const std::string& target);
• void takeDamage(unsigned int amount);
• void beRepaired(unsigned int amount);
*/

class ClapTrap{
  private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

  public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &rhs);

    int getHitPoints(void);
    void setHitPoints(int newHitPoints);
    int getEnergyPoints(void);
    void setEnergyPoints(int energyPoints);
    int getAttackDamage(void);
    void setAttackDamage(int attackDamage);
    std::string getName(void);
    void setName(std::string name);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int min(int a, int b);

};

#endif
