#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
    this->type = "AAnimal";
    std::cout << "AAnimal constructor called" << std::endl; 
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &other) {
    std::cout << "Copy AAnimal " << this->getType() << " contructor called." << std::endl;
    *this = other;
}

AAnimal &AAnimal::operator=(AAnimal const &other) {
    std::cout << "Copy AAnimal " << this->type << " assignement operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string AAnimal::getType(void) const {
    return this->type;
}
