#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    protected:

    private:
        Brain* _thoughts;
    public:
        Cat( void );
        virtual ~Cat( void ); 
        Cat(Cat const &other);
        Cat &operator=(Cat const &other);

        virtual void makeSound(void) const;
        virtual void printIdeas(void) const;
};

#endif