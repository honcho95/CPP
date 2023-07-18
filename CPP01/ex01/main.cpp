#include "Zombie.hpp"

int main()
{
    Zombie *azz;
    azz = zombieHorde(5, "horde");
     for (int i = 0; i < 5; i++)
        azz[i].announce();
    delete [] azz;
    return 0;
}

#include "Zombie.hpp"

int main(void) {
	Zombie *horde = zombieHorde(10, "Jim");
	delete[] horde;
}