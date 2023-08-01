#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "Constructor called" << std::endl;
    this->_hp = 10;
    this->_ep = 10;
    this->_ad = 0;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj) : _name(obj._name), _hp(obj._hp), _ep(obj._ep), _ad(obj._ad) 
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj) 
{
    std::cout << "Copy ClapTrap assignement" << std::endl;

    if(this != &obj)
    {
        this->_name = obj._name;
        this->_hp = obj._hp;
        this->_ep = obj._ep;
        this->_ad = obj._ad;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_ep == 0)
		std::cout << this->_name << " has no energy to attack!" << std::endl;
	if (this->_hp <= 0) 
		std::cout << this->_name << " is out! can't attack :/" << std::endl;
	else {
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
		<< ", causing " << this->_ad << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount 
		<< " points of damage!" << std::endl;
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is out!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_ep == 0)
		std::cout << "ClapTrap " << this->_name << " no energy, can't repair :/" << std::endl;
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is out! can't be repaired :/" << std::endl;
	else {
		this->_hp += amount;
		this->_ep--;
		std::cout << "ClapTrap " << this->_name << " heals for " << amount 
			<< " hp!" << std::endl;
	}
}
