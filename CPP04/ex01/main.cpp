#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int size = 10;
    Animal* animals[size];

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << "Animal " << i << " type: " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
        std::cout << std::endl;
    }
    
    for (int i = 0; i < size; i++)
    {
        delete animals[i];
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Deep copy test :" << std::endl;

    // here u intilialize tmp as a copy of basic which invokes the constructor of dog class
    // proof that dog class performs a deep copy cuz if it wasnt tmp and basic would point
    // to the same brain object and crash when i call basic.makeSound after tmp.makeSound
    // cuz tmp would be destroyed and so basic wouldnt have access to the brain.
    Dog basic;
    {
        Dog tmp = basic;
        tmp.makeSound();
    }
    basic.makeSound(); // If its not a deep copy this makes the program crash

    return 0;
}

