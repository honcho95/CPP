#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const AAnimal* Reserve[10];

    for (int i = 0; i < 10; i++)
    {
        if(i % 2)
            Reserve[i] = new Dog();
        else
            Reserve[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << std::endl;
        Reserve[i]->makeSound();
        Reserve[i]->printIdeas();
        std::cout << std::endl;
    }
    for (int i = 0; i < 10; i++)
        delete Reserve[i];

    std::cout << "Finished " << std::endl;
    
    return 0;
}