/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:42:09 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/08 13:13:59 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :_fixedPointNum(0) // default construct
{ std::cout << "\033[1;32mDefault constructor called\033[0m" << std::endl; }

Fixed::Fixed(const Fixed& instance) // copy construct
{ 
    std::cout << "\033[1;33mCopy constructor called\033[0m" << std::endl;
    *this = instance;
}

Fixed&  Fixed::operator=(const Fixed& instance) // copy assignment operator
{
    std::cout << "\033[1;36mCopy assignment operator called\033[0m" << std::endl;
    _fixedPointNum = instance.getRawBits();
    return *this;
}

Fixed::~Fixed() // destruct
{ std::cout << "\033[1;31mDestructor called\033[0m" << std::endl; }

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointNum;
}

void    Fixed::setRawBits(int const raw)
{
    _fixedPointNum = raw;
}