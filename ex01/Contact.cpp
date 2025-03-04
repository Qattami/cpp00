
#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void Contact::set_contact(const std::string &f_name, const std::string &l_name, const std::string &nickname, 
                            const std::string &phone, const std::string &secret)
                            {
                               First_name = f_name;
                               Last_name = l_name;
                               Nickname = nickname;
                               Phone_number = phone;
                               Darkest_secret = secret;
                            }


std::string Contact::getFirstName() const { return First_name; }
std::string Contact::getLastName() const { return Last_name; }
std::string Contact::getNickname() const { return Nickname; }
std::string Contact::getPhoneNumber() const { return Phone_number; }
std::string Contact::getDarkSecret() const { return Darkest_secret; }

std::string Contact::truncate(const std::string &str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}
void Contact::displayContact() const
{
    std::cout << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|"
              << std::setw(10) << "Phone Number" << "|"
              << std::setw(10) << "Dark Secret" << "\n";
    std::cout << "--------------------------------------------------------\n";

    std::cout << truncate(getFirstName()) << "|"
              << std::setw(10) << truncate(getLastName()) << "|"
              << std::setw(10) << truncate(getNickname()) << "|"
              << std::setw(10) << truncate(getPhoneNumber()) << "|"
              << std::setw(10) << truncate(getDarkSecret()) << "\n";


}

