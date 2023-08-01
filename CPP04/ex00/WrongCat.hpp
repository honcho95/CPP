#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:

    private:

    public:
        WrongCat( void );
        virtual ~WrongCat(); 
        WrongCat(WrongCat const &other);
        WrongCat &operator=(WrongCat const &other);

        void makeSound(void) const;
};

#endif
