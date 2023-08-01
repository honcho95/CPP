#include "Dog.hpp"

Dog::Dog(void) {
    this->type = "Dog"; 
    std::cout << "Dog constructor called" << std::endl; 
    _thoughts = new Brain("If my master die I'll die with him !");
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete _thoughts;
}

Dog::Dog(Dog const &other) : Animal(other) {
    std::cout << "Copy Dog contructor called." << std::endl; 
    *this = other;
}

Dog &Dog::operator=(Dog const &other) { // Deep copy
    std::cout << "Copy Dog assignement operator called." << std::endl;
    if (this != &other)
    {    
        this->type = other.type;
        this->_thoughts = new Brain();
        *this->_thoughts = *other._thoughts;
    }   
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "WAF" << std::endl;
}

void Dog::printIdeas(void) const {
    if (this->_thoughts)
        this->_thoughts->printIdeas();
}