#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    ~FragTrap(void);

    FragTrap(FragTrap const &obj);
    FragTrap &operator=(FragTrap const &obj);

    void attack(const std::string& target);
    void highFivesGuys();
};

#endif
