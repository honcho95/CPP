#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>
# include <cstdlib>
# include <fstream>
# include <cmath>

class Animal
{
    protected:
        std::string type;
    private:

    public:
        Animal( void );
        virtual ~Animal(); 
        Animal(Animal const &other);
        Animal &operator=(Animal const &other);
        
        virtual void setType(std::string Type);
        virtual std::string getType(void) const;
        virtual void makeSound(void) const;
};

#endif