#include <iostream>
#include "PhoneBook.hpp"

int main() {
    PhoneBook phonebook;
    std::string command;
    while (true) {
        std::cout << "Enter a command 111(ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        size_t i = 0;
        while (i < command.size()) {
            command[i] = std::toupper(command[i]);
            i++;
        }       
        if (command == "ADD") {
            phonebook.addContact();
        } 
        else if (command == "SEARCH") {
            phonebook.searchContact();
        } 
        else if (command == "EXIT") {
            std::cout << "Exiting phonebook... Contacts are lost forever!\n";
            break; 
        } 
    }

    return 0;
}
