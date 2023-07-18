#include "Zombie.hpp"

Zombie* zombieHorde (int n, std::string name)
{
    if (n <= 0)
        return NULL;
    int i = 0;
    Zombie *zombie = new Zombie[n];
    while(i < n)
    {
        zombie[i].setName(name);
        zombie[i].announce();
        i++;
    }
    return (zombie);
}

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *horde = new Zombie[N];
  for (int i = 0; i < N; i++) {
    horde[i].set_name(name);
    horde[i].announce();
  }
  return horde;
}