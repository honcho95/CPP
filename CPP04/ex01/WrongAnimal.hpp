#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>
# include <cstdlib>
# include <fstream>
# include <cmath>
# include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    private:

    public:
    
        WrongAnimal( void );
        virtual ~WrongAnimal(); 
        WrongAnimal(WrongAnimal const &other);
        WrongAnimal &operator=(WrongAnimal const &other);

        void setType(std::string Type);
        std::string getType(void) const;
        void makeSound(void) const;
};

#endif