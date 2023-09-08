/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:41:27 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/08 13:58:33 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNum (0) // default constructor
{ std::cout << "\033[1;32mDefault constructor called\033[0m" << std::endl; }

Fixed::Fixed(const Fixed& instance) // copy constructor
{
    std::cout << "\033[1;33mCopy constructor called\033[0m" << std::endl;
    //_fixedPointNum = instance.getRawBits(); instead copy the whole instance
    *this = instance;
}

Fixed&  Fixed::operator=(const Fixed& instance) // copy assignment operator
{
    std::cout << "\033[1;36mCopy assignment operator called\033[0m" << std::endl;
    _fixedPointNum = instance.getRawBits();
    return *this;
}

Fixed::Fixed(const int num) // int constructor
{
    std::cout << "\033[1;35mInt constructor called\033[0m" << std::endl;
    int scalingFactor = _fractBits;
    _fixedPointNum = num << scalingFactor; // scaling the int value according to the fract bits
}

Fixed::Fixed(const float num) // float constructor
{
    std::cout << "\033[1;34mFloat constructor called\033[0m" << std::endl;
    int scalingFactor = 1 << _fractBits; // used to convert between arithmetic data types and fixed-point values.
    _fixedPointNum = roundf(num * scalingFactor);
}

Fixed::~Fixed()  // destructor
{ std::cout << "\033[1;31mDestructor called\033[0m" << std::endl; }

int Fixed::getRawBits(void) const
{ return _fixedPointNum; }

void    Fixed::setRawBits(int const raw)
{ _fixedPointNum = raw; }

float Fixed::toFloat(void) const
{
    int scalingFactor = 1 << _fractBits;
    float n = static_cast<float>(_fixedPointNum) / scalingFactor;
    return n;
}

int Fixed::toInt(void) const
{
    int scalingFactor = _fractBits;
    return _fixedPointNum >> scalingFactor;
}

std::ostream& operator<<(std::ostream& o, Fixed const& instance)
{
    o << instance.toFloat();
    return o;
}

