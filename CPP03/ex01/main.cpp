#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap a("Oliveira");
    ScavTrap b("Makhachev");

    b.attack("Oliveira");
    a.takeDamage(20);
    a.beRepaired(3);
    a.attack("Makhachev");
    b.takeDamage(5);
    b.takeDamage(5);

    b.guardGate();

    return 0;
}
