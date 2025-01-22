/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Contact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:38:51 by iqattami          #+#    #+#             */
/*   Updated: 2025/01/20 12:27:26 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    creation_t = time(nullptr);
}
Contact::~Contact(){}

Contact::set_contact(const std::string &f_name, const std::string &l_name, const std::string &nickname, 
                            const std::string &phone, const std::string &secret)
                            {
                               First_name = f_name;
                               Last_name = l_name;
                               Nickname = nickname;
                               Phone_number = phone;
                               Darkest_secret = secret;
                            }


std::string Contact::getF_name() const
{
    return (First_name);
}
std::string Contact::getL_name() const
{
    return (Last_name);
}
std::string Contact::getNickname() const
{
    return (Nickname);
}
std::string Contact::getPhone() const
{
    return (Phone_number);
}
std::string Contact::getsecret() const
{
    return (Darkest_secret);
}
time_t Contact::getTime() const
{
    return (creation_t);
}