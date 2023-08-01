#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
    protected:

    private:
        Brain* _thoughts;
    public:
        Dog( void );
        virtual ~Dog(); 
        Dog(Dog const &other);
        Dog &operator=(Dog const &other);

        virtual void makeSound(void) const;
        virtual void printIdeas(void) const;
};

#endif