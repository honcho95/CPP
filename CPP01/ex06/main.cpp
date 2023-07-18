#include "Harl.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: [./harlFilter <loglevel>]" << std::endl;
    exit(EXIT_FAILURE);
  }
  Harl harl = Harl();
	harl.filter(argv[1]);
	return (EXIT_SUCCESS);
}