/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 02:21:16 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 02:45:59 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
    _health = 100;
    _energy = 100;
    _attackStrength = 30;
    std::cout << "[FragTrap] " << _name << " is ready to bring the energy! HP: " << _health << ", EP: " << _energy << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "[FragTrap] " << _name << " has left the scene." << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "[FragTrap] " << _name << " is looking for a high five! Anyone?" << std::endl;
}
