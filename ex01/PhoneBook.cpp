
#include "PhoneBook.hpp"
#include <algorithm>

PhoneBook::PhoneBook() : num_contact(0) {}
void PhoneBook::addContact()
{
    std::string F_name , L_name, nickname, phoneNum, secret;
    int i;
    std::cout << "Enter the First Name: ";
    std::getline(std::cin, F_name);
    if(F_name.empty())
    {
        std::cout << "First Name is empty";
        return;
    }
    std::cout << "Enter the Last Name: ";
    std::getline(std::cin, L_name);
    if(L_name.empty())
    {
        std::cout << "Last Name is empty";
        return;
    }
    std::cout << "Enter the nickname: ";
    std::getline(std::cin, nickname);
    if(nickname.empty())
    {
        std::cout << "nickname is empty";
        return;
    }
    std::cout << "Enter the Phone Number: ";
    std::getline(std::cin, phoneNum);
    if(phoneNum.empty())
    {
        std::cout << "Phone Number is empty";
        return;
    }
    std::cout << "Enter the Darkest secret: ";
    std::getline(std::cin, secret);
    if(secret.empty())
    {
        std::cout << "Darkest secret is empty";
        return;
    }
    i = num_contact % MAX_CONTACTS;
    contacts[i].set_contact(F_name, L_name, nickname, phoneNum, secret);
    num_contact++;
    std::cout << num_contact << std::endl;
    std::cout << "contact added !";
}


void PhoneBook::searchContact() const
{
    if(num_contact == 0)
    {
        std::cout << "the List is empty ! \n";
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname " << "\n";
    std::cout << "-----------------------------------------------\n";
    for (int i = 0; i < std::min(num_contact, MAX_CONTACTS); i++) {
        std::cout << std::setw(10) << i  << "|"
                  << std::setw(10) << contacts[i].truncate(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << contacts[i].truncate(contacts[i].getLastName()) << "|"
                  << std::setw(10) << contacts[i].truncate(contacts[i].getNickname()) << "\n";
    }
    std::cout << "-----------------------------------------------\n";
     std::cout << "Enter the index of the contact you want to view: ";
    std::cout << "Enter index: ";
    int index = -1;
    std::cin >> index;
    if (index < 0 || index >= std::min(num_contact, MAX_CONTACTS)) {
        std::cout << "Invalid index or index out of range!\n";
        return;
    }

    contacts[index].displayContact();
       
} 
