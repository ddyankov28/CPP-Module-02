/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:40:06 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/08 13:00:39 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main()
{
    Fixed       a;
    std::cout << "--------------------------------" << std::endl;
    Fixed const b(10);
    std::cout << "--------------------------------" << std::endl;
    Fixed const c(42.42f);
    std::cout << "--------------------------------" << std::endl;
    Fixed const d(b);
    std::cout << "--------------------------------" << std::endl;
    a = Fixed(1234.4321f);
    std::cout << "--------------------------------" << std::endl;
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}