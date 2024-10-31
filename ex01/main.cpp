#include "ScavTrap.hpp"

int main() 
{
    ClapTrap base("BaseBot");
    ScavTrap scav("Scavvy");

    base.attack("Enemy1");
    scav.attack("Enemy2");

    base.takeDamage(3);
    scav.takeDamage(10);

    base.beRepaired(2);
    scav.beRepaired(5);

    scav.guardGate();

    return 0;
}
