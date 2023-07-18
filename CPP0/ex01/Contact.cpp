#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::add_contact(int iindex)
{
	index = iindex;
	std::cout << "First name      : ";
	std::getline(std::cin, firstname);
	std::cout << "Last name       : ";
	std::getline(std::cin, lastname);
	std::cout << "Nickname        : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number    : ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret  : ";
	std::getline(std::cin, darkest_secret);
}

void	Contact::set_index(int iindex)
{
	index = iindex;
}

static void	display_ten(std::string str)
{
	int			len;
	std::string	spaces(10, ' ');

	len = str.length();
	if (len <= 10)
		std::cout << spaces.substr(0, 10 - len) << str;
	else
		std::cout << str.substr(0, 9) << '.';
}

void	Contact::display_contact(void) const
{
	std::string		iindex = "";

	iindex += index + '0';
	display_ten(iindex);
	std::cout << "|";
	display_ten(firstname);
	std::cout << "|";
	display_ten(lastname);
	std::cout << "|";
	display_ten(nickname);
	std::cout << std::endl;
}

void	Contact::display_more(void) const
{
	std::cout << "First name      : " << firstname << std::endl;
	std::cout << "Last name       : " << lastname << std::endl;
	std::cout << "Nickname        : " << nickname << std::endl;
	std::cout << "Phone number    : " << phone_number << std::endl;
	std::cout << "Darkest secret  : " << darkest_secret << std::endl;
}
