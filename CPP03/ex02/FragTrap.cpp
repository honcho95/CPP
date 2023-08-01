#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_hp = 100;
    this->_ep = 100;
    this->_ad = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj) 
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
    std::cout << "Copy FragTrap assignment" << std::endl;
    ClapTrap::operator=(obj);
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->_name << " attacks " << target 
        << ", causing " << this->_ad << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " is asking for a high five!" << std::endl;
}
