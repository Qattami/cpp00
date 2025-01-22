#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <ctime>


class Contact 
{
    private :
            std::string First_name;
            std::string Last_name;
            std::string Nickname;
            std::string Phone_number;
            std::string Darkest_secret;
            time_t creation_t;
    public :

            Contact();
            ~Contact();
            void set_contact(const std::string &f_name, const std::string &l_name, const std::string &nickname, 
                            const std::string &phone, const std::string &secret);
           std::string getF_name() const;
           std::string getL_name() const;
           std::string getNickname() const;
           std::string getsecret() const;
           std::string getPhone() const;
           time_t getTime() const;
}

#endif