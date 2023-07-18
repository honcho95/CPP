#include "Phonebook.hpp"

int main(void)
{
    PhoneBook	phonebook;
	std::string	input;

	std::cout << "-------------------------------------" << std::endl;
    std::cout << "Type ADD to add a contact." << std::endl;
	std::cout << "Type SEARCH to display your contacts." << std::endl;
	std::cout << "Type EXIT to exit." << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	
    while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Wrong input :)" << std::endl;
	}
	return (0);
}