/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:23:47 by aalhalab          #+#    #+#             */
/*   Updated: 2024/10/31 00:21:42 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap robot("NovaBot");

    robot.attack("Target-A");
    robot.takeDamage(4);
    robot.beRepaired(3);
    robot.takeDamage(7);  // Health reaches zero here

    return 0;
}
