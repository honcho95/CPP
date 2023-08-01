#include "WrongCat.hpp"

WrongCat::WrongCat(void) // Constructor
{
    this->type = "WrongCat"; // Changing type for the WrongCat
    std::cout << "WrongCat constructor called" << std::endl; 
}

WrongCat::~WrongCat() // Destructor
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other) // Same as cat
{
    std::cout << "Copy WrongCat contructor called." << std::endl; 
}

WrongCat &WrongCat::operator=(WrongCat const &other) // Assignement
{
    std::cout << "Copy WrongCat assignement operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong Cat Sound" << std::endl;
}
