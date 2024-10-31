/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:18:31 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 10:18:35 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) 
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) 
    {
    _health = FragTrap::_health;
    _energy = ScavTrap::_energy;
    _attackStrength = FragTrap::_attackStrength;

    std::cout << "[DiamondTrap] " << _name << " is formed with " 
              << _health << " HP, " << _energy << " EP, and " 
              << _attackStrength << " attack power." << std::endl;
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "[DiamondTrap] " << _name << " has dissolved." << std::endl;
}

void DiamondTrap::whoAmI() 
{
    std::cout << "[DiamondTrap] My name is " << _name 
              << ", but my ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}
