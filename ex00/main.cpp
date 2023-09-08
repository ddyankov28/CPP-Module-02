/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:41:50 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/07 09:19:31 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    std::cout << "-------------------------------" << std::endl;
    Fixed a;
    std::cout << "-------------------------------" << std::endl;
    Fixed b(a);
    std::cout << "-------------------------------" << std::endl;
    Fixed c;
    std::cout << "-------------------------------" << std::endl;
    c = b;
    std::cout << "-------------------------------" << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << "-------------------------------" << std::endl;
    return 0;
}