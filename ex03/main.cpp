/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:18:22 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 10:18:23 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main() 
{
    DiamondTrap diamondBot("Gem");

    diamondBot.attack("RockMonster"); 
    diamondBot.takeDamage(15);        
    diamondBot.beRepaired(5);         
    diamondBot.whoAmI();              

    return 0;
}
