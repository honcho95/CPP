#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat"; 
    std::cout << "Cat constructor called" << std::endl; 
    _thoughts = new Brain("As a cat, I'll eat my master if he die.");
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _thoughts;
}

Cat::Cat(Cat const &other) : Animal(other) {
    std::cout << "Copy Cat contructor called." << std::endl; 
    *this = other;
}

Cat &Cat::operator=(Cat const &other) {
    std::cout << "Copy Cat assignement operator called." << std::endl;
    if (this != &other)
    {    
        this->type = other.type;
        this->_thoughts = new Brain();
        *this->_thoughts = *other._thoughts;
    }   
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "MIAOU" << std::endl;
}

void Cat::printIdeas(void) const{
    if (this->_thoughts)
        this->_thoughts->printIdeas();
}