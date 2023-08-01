#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ~ScavTrap(void);

    ScavTrap(ScavTrap const &obj);
    ScavTrap &operator=(ScavTrap const &obj);

    void attack(const std::string& target);
    void guardGate();
};

#endif
