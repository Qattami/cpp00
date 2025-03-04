#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>
# include "Contact.hpp"

# define MAX_CONTACTS 8
class PhoneBook
{
    private :
            int num_contact;
    public:
            PhoneBook();
            Contact contacts[MAX_CONTACTS];

            void addContact();
            void searchContact()const;

};

#endif