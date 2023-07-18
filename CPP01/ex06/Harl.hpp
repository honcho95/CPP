#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl {
 public:
	Harl();
	~Harl();
  void complain(std::string level);
	void filter(std::string level);

 private:
  void debug();
  void info();
  void warning();
  void error();
};

#endif