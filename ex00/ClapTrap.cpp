/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:23:36 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 00:21:39 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attackStrength(0) {
    std::cout << "[ClapTrap] " << _name << " enters the battle with " << _health << " HP and " << _energy << " EP." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "[ClapTrap] " << _name << " has been retired from the battle!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (_energy > 0 && _health > 0) {
        std::cout << "[ClapTrap] " << _name << " launches an attack on " << target << ", dealing " << _attackStrength << " damage!" << std::endl;
        _energy -= 1;
    } else {
        std::cout << "[ClapTrap] " << _name << " is too weak to attack." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    _health -= amount;
    if (_health < 0) _health = 0;
    std::cout << "[ClapTrap] " << _name << " receives " << amount << " damage. Remaining HP: " << _health << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy > 0 && _health > 0) {
        _health += amount;
        _energy -= 1;
        std::cout << "[ClapTrap] " << _name << " restores " << amount << " health. Current HP: " << _health << std::endl;
    } else {
        std::cout << "[ClapTrap] " << _name << " lacks the energy to repair." << std::endl;
    }
}
