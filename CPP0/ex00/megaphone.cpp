#include <iostream>
#include <ctype.h>

int	main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND  UNBEARABLE NOISE *" << std::endl;
	    return (0);
    }
    for (int i = 1; i < ac ; i++)
    {
        std::string phrase = av[i];
        int size = phrase.size();
        //std::cout << " "; faut il mettre les espaces ?

        for (int j = 0; j < size; j++)
        {
            char lettres = toupper(phrase[j]);
            std::cout << lettres;
        }
    }
    std::cout << std::endl;
}
