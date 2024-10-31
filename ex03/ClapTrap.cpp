/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 02:14:21 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 02:15:52 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attackStrength(0) 
{
    std::cout << "[ClapTrap] " << _name << " is ready for action with " << _health << " HP and " << _energy << " EP." << std::endl;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "[ClapTrap] " << _name << " has been deactivated." << std::endl;
}

void ClapTrap::attack(const std::string &target) 
{
    if (_energy > 0 && _health > 0) 
    {
        std::cout << "[ClapTrap] " << _name << " attacks " << target << " with " << _attackStrength << " attack power!" << std::endl;
        _energy -= 1;
    }
    else
        std::cout << "[ClapTrap] " << _name << " has insufficient resources to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    _health -= amount;
    if (_health < 0) _health = 0;
    std::cout << "[ClapTrap] " << _name << " takes " << amount << " damage. Remaining HP: " << _health << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (_energy > 0 && _health > 0) 
    {
        _health += amount;
        _energy -= 1;
        std::cout << "[ClapTrap] " << _name << " repairs itself by " << amount << " points. Current HP: " << _health << std::endl;
    } 
    else 
        std::cout << "[ClapTrap] " << _name << " is too weak to repair." << std::endl;
}
