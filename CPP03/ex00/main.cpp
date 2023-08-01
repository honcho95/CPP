#include "ClapTrap.hpp"

// int main (void)
// {
//     ClapTrap a("Oliveira");
//     ClapTrap b("Makhachev");

//     b.attack("Oliveira");
//     a.takeDamage(b.getAttackDamage());
//     a.beRepaired(3);
//     a.attack("Makhachev");
//     b.takeDamage(a.getAttackDamage());
//     b.takeDamage(a.getAttackDamage());

//     return 0;
// }

int main (void)
{
    ClapTrap a("Oliveira");
    ClapTrap b("Makhachev");

    b.attack("Oliveira");
    a.takeDamage(5);
    a.beRepaired(3);
    a.attack("Makhachev");
    b.takeDamage(5);
    b.takeDamage(5);

    return 0;
}
