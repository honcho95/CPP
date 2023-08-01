#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl; 
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other)
{
    std::cout << "Copy Dog constructor called." << std::endl; 
    *this = other;
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Copy Dog assignement operator called." << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        this->type = other.type;
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "WAF" << std::endl;
}
