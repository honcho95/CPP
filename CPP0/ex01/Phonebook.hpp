#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# define max 8

class PhoneBook
{
    private:
		int		last_index;
		Contact	contacts[max];

	public:
        PhoneBook();
        ~PhoneBook();
		void	add(void);
		void	search(void) const;
};

#endif
