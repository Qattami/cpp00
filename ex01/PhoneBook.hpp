#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>
# include "Contact.hpp"


class PhoneBook
{
    private :
            int num_contact;
    public:
            static const int MAX_CONTACTS = 8;
            Contact contacts[MAX_CONTACTS];

            PhoneBook();
            ~PhoneBook();

            void addContact();
            void searchContact() const;

}

#endif