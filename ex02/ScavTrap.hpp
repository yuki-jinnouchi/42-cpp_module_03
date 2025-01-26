/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:48:33 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/26 16:49:58 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

/*
  ScavTrap will use the attributes of ClapTrap (update ClapTrap in consequence) and
  must initialize them to:
  • Name, which is passed as parameter to a constructor
  • Hit points (100), represent the health of the ClapTrap
  • Energy points (50)
  • Attack damage (20)
  ScavTrap will also have its own special capacity:
    void guardGate();

  This member function will display a message informing that ScavTrap is now in Gate
  keeper mode.
*/

class ScavTrap :public ClapTrap
{
  private:

  public:
    // Orthodox Canonical Form
    ScavTrap();
    ~ScavTrap();
    ScavTrap(ScavTrap const &src);
    ScavTrap & operator=(ScavTrap const &src);

    // Opitional constructor
    ScavTrap(const std::string name);

    // Member functions
    void attack(std::string const &target);
    void guardGate(void);

};


#endif
