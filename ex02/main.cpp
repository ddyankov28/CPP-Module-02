/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:18:46 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/08 16:28:27 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a(5);
    Fixed b(10);

    std::cout << std::boolalpha << "a > b is " << (a > b) << std::endl;
    std::cout << std::boolalpha << "a + b is " << (a + b) << std::endl;
    std::cout << std::boolalpha << "a * b is " << (a * b) << std::endl;
    std::cout << std::boolalpha << "a / b is " << (a / b) << std::endl;

    return 0;
}
