/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:22:59 by iqattami          #+#    #+#             */
/*   Updated: 2025/01/19 13:59:37 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <cctype>  

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if(ac >= 2)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if(std ::isalpha(av[i][j]))
                    std ::cout << (char)std ::toupper(av[i][j]);
                else
                    std::cout << av[i][j];
                j++;
            }   
            i++;
            if(av[i])
                std::cout << " ";
        }
        std::cout << std::endl; 
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
}