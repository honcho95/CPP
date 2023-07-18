#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        void setName(std::string str);
        void announce(void);

    private:
        std::string _name;
};

Zombie* zombieHorde(int n, std::string name);
#endif

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
 public:
  Zombie();
  ~Zombie();

  std::string get_name() const;

  void set_name(std::string name);
	
  void announce();
	

 private:
  std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif