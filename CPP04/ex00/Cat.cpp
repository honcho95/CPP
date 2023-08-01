#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl; 
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
    std::cout << "Copy Cat constructor called." << std::endl; 
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Copy Cat assignement operator called." << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "MIAOU" << std::endl;
}
