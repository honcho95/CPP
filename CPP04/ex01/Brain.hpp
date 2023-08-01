#ifndef _BRAIN_CPP_
# define _BRAIN_CPP_

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain(void);
    Brain(std::string ideas);
    ~Brain(void);
    Brain( Brain const &other);
    Brain &operator=(Brain const &other);

    void printIdeas(void) const;
    std::string getIdeas(void) const;
};



#endif