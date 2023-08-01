#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor called" << std::endl; 
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) : type(other.type)
{
    std::cout << "Copy WrongAnimal " << this->getType() << " contructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &other ) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if ( this != &other )
		type = other.type;
	return *this;
}

void WrongAnimal::setType(std::string NEW)
{
    this->type = NEW;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong Animal" << std::endl;
}