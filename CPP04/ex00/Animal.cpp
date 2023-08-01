#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "Animal";
    std::cout << "Animal constructor called" << std::endl; 
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &other)
{
    std::cout << "Copy Animal " << this->getType() << " constructor called." << std::endl;
    *this = other;
}

Animal &Animal::operator=(Animal const &other)
{
    std::cout << "Copy Animal " << this->type << " assignement operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Animal::setType(std::string NEW)
{
    this->type = NEW;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound." << std::endl;
}
