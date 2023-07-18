#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	last_index = -1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add(void)
{
	if (last_index == max - 1)
	{
		for (int i = 0; i < max - 1; i++)
		{
			contacts[i] = contacts[i + 1];
			contacts[i].set_index(i);
		}
		contacts[last_index].add_contact(last_index);
	}
	else
	{
		last_index++;
		contacts[last_index].add_contact(last_index);
	}
	std::cout << std::endl;
}


static void	display_table(void)
{
	std::string	header;
	std::string	line(43, '-');

	header += "     Index|";
	header += "First Name|";
	header += " Last Name|";
	header += "  Nickname";
	std::cout << header << std::endl << line << std::endl;
}

static int	str_int(std::string str)
{
	int	i;
	int res = 0;

	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + str[i] - '0';
		i++;
	}
	if (str[i])
		return (-1);
	return (res);
}

void	PhoneBook::search(void) const
{
	int	i;
	int	index;
	std::string	index_str;

	if (last_index == -1)
	{
		std::cout << "Your phonebook is empty." << std::endl << std::endl;
		return ;
	}
	display_table();
	i = -1;
	while (++i <= last_index)
		contacts[i].display_contact();
	std::cout << std::endl;
	index = -1;
	while (index < 0 || index > last_index)
	{
		std::cout << "Enter a valid index : ";
		std::getline(std::cin, index_str);
        index = str_int(index_str);
	}
	contacts[index].display_more();
	std::cout << std::endl;
}
