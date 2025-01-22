/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:28:36 by iqattami          #+#    #+#             */
/*   Updated: 2025/01/22 15:42:53 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
    
    std::cout << "contact added !";
}

void PhoneBook::searchContact
{
    
}