#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    private:
		int			index;
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
    public:
        Contact();
        ~Contact();
		void	add_contact(int index);
		void	display_contact(void) const;
		void	display_more(void) const;
		void	set_index(int index);
};

#endif