/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:18:46 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/10 11:56:29 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed       a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    //test
    /*Fixed       c(23);
    Fixed       d(10);*/
    

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;

    std::cout << Fixed::max(a,b) << std::endl;
    
    //test   
   /* std::cout << std::boolalpha << "c > d is " << (c > d) << std::endl;
    std::cout << std::boolalpha << "c < d is " << (c < d) << std::endl;
    std::cout << std::boolalpha << "c >= d is " << (c >= d) << std::endl;
    std::cout << std::boolalpha << "c <= d is " << (c <= d) << std::endl;
    std::cout << std::boolalpha << "c == d is " << (c == d) << std::endl;
    std::cout << std::boolalpha << "c != d is " << (c != d) << std::endl;
    std::cout << "c + d is " << (c + d) << std::endl;
    std::cout << "c - d is " << (c - d) << std::endl;
    std::cout << "c * d is " << (c * d) << std::endl;
    std::cout << "c / d is " << (c / d) << std::endl;
    std::cout << Fixed::min(c,d) << std::endl;
    std::cout << Fixed::max(c,d) << std::endl;*/

    return 0;
}
