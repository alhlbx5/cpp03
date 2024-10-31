/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:18:17 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 10:19:01 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _health = 100;
    _energy = 50;
    _attackStrength = 20;
    std::cout << "[ScavTrap] " << _name << " is ready with " << _health << " HP and " << _energy << " EP!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "[ScavTrap] " << _name << " has retired from duty!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "[ScavTrap] " << _name << " has entered Gatekeeper mode!" << std::endl;
}