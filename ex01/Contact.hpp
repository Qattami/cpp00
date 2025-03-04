#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
# include <iomanip>



class Contact 
{
    private :
            std::string First_name;
            std::string Last_name;
            std::string Nickname;
            std::string Phone_number;
            std::string Darkest_secret;
        //     time_t creation_t;
    public :

            Contact();
            ~Contact();
            void set_contact(const std::string &f_name, const std::string &l_name, const std::string &nickname, 
                            const std::string &phone, const std::string &secret);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getDarkSecret() const;
        std::string getPhoneNumber() const;

           void displayContact() const;
           std::string truncate(const std::string &str) const;
};

#endif