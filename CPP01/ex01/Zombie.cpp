#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " died" << std::endl;
    return;
}

void    Zombie::setName(std::string str)
{
    this->_name = str;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}
Zombie::~Zombie() { std::cout << this->name << " died." << std::endl; }

std::string Zombie::get_name() const { return this->name; }

void Zombie::set_name(std::string name) { this->name = name; }


void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}