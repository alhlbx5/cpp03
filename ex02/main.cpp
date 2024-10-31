/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 02:22:05 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 02:22:22 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() 
{
    ClapTrap baseBot("BaseBot");
    FragTrap fragBot("Fraggy");
    baseBot.attack("EnemyA");
    fragBot.attack("EnemyB");
    baseBot.takeDamage(2);
    fragBot.takeDamage(5);
    baseBot.beRepaired(1);
    fragBot.beRepaired(4);
    fragBot.highFivesGuys();
    return 0;
}
