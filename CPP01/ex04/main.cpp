#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv) {
  std::ifstream infile;
  std::stringstream buffer;
  std::ofstream outfile;
  std::string text;

  // Check for invalid input
  if (argc != 4) {
    std::cout << "Usage: [./sed <filename> <string_to_replace> "
                 "<string_to_replace_by>]"
              << std::endl;
    exit(EXIT_FAILURE);
  }

  // Check if file opens
  infile.open(argv[1]);
  if (infile.fail()) {
    std::cout << "Error opening file!" << std::endl;
    exit(EXIT_FAILURE);
  }

  // Read file into memory (as a string)
  buffer << infile.rdbuf();
  infile.close();
  text = buffer.str();

  // Replace all occurences of argv[2] with argv[3]
  int index = 0;
  while ((index = text.find((std::string)argv[2], index)) != -1) {
    text.erase(index, ((std::string)argv[2]).length());
    text.insert(index, (std::string)argv[3]);
    index += ((std::string)argv[3]).length();
  }

  // Write text in outfile
  outfile.open(argv[1] + (std::string) ".replace");
  outfile << text;
  outfile.close();
  return (EXIT_SUCCESS);
}