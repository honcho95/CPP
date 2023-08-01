#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "\n======= Initial Tests =======" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nType of Animal 'j'(Dog) : " << j->getType() << std::endl;
    std::cout << "Type of Animal 'i'(Cat) : " << i->getType() << std::endl;
    std::cout << "Sound made by Animal 'i'(Cat) : "; i->makeSound();
    std::cout << "Sound made by Animal 'j'(Dog) : "; j->makeSound();
    std::cout << "Sound made by Animal 'meta' : "; meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << "\nType of WrongAnimal 'wrongI'(WrongCat) : " << wrongI->getType() << std::endl;
    std::cout << "Sound made by WrongAnimal 'wrongI'(WrongCat) : "; wrongI->makeSound();
    std::cout << "Sound made by WrongAnimal 'wrongMeta' : "; wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongI;

    std::cout << "\n======= Tests Completed =======" << std::endl;

    return 0;
}
