#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>
# include <cstdlib>
# include <fstream>
# include <cmath>

class ClapTrap
{
private:
    
	std::string     _name;
    int             _hp;
    unsigned int    _ep;     
    unsigned int    _ad;

public:

	ClapTrap(std::string name);
	~ClapTrap(void);

	ClapTrap(ClapTrap const &obj);
	ClapTrap &operator=(ClapTrap const &obj);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    // unsigned int getAttackDamage() const;
};

#endif