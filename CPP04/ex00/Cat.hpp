#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal
{
    protected:

    private:

    public:
        Cat( void );
        virtual ~Cat(); 
        Cat(Cat const &other);
        Cat &operator=(Cat const &other);

        void makeSound(void) const;
};

#endif
