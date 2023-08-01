#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap a("Oliveira");
    ScavTrap b("Makhachev");
    FragTrap c("Ferguson");

    // Testing ClapTrap
    a.attack("Makhachev");
    b.takeDamage(5);
    a.beRepaired(3);

    // Testing ScavTrap
    b.attack("Oliveira");
    a.takeDamage(5);
    b.beRepaired(5);
    b.guardGate();

    // Testing FragTrap
    c.attack("Oliveira");
    a.takeDamage(15);
    c.beRepaired(10);
    c.highFivesGuys();

    return 0;
}
