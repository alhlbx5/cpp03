#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
protected:
    std::string _name;
    int _health;
    int _energy;
    int _attackStrength;

public:
    ClapTrap(std::string name);  
    ~ClapTrap();                 

    void attack(const std::string &target); 
    void takeDamage(unsigned int amount);   
    void beRepaired(unsigned int amount);   
};

#endif
