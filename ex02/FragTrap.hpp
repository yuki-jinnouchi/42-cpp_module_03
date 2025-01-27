/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:25:13 by yjinnouc          #+#    #+#             */
/*   Updated: 2025/01/27 18:55:27 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

/*
  Same things for the attributes, but with different values this time:
  • Name, which is passed as parameter to a constructor
  • Hit points (100), represent the health of the ClapTrap
  • Energy points (100)
  • Attack damage (30)
  FragTrap has a special capacity too:
    void highFivesGuys(void);

  This member function displays a positive high fives request on the standard output.
*/

class FragTrap :public ClapTrap
{
  private:

  public:
    // Orthodox Canonical Form
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &src);
    FragTrap & operator=(const FragTrap &rhs);

    // Optional constructor
    FragTrap(const std::string name);

    // Member functions
    void attack(const std::string &target);
    void highFivesGuys(void);
};

# endif
