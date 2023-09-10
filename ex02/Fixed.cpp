/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:18:58 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/10 11:54:56 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :_fixedPointNum (0) {}

Fixed::Fixed(const Fixed& instance)
{
    *this = instance;
}

Fixed&  Fixed::operator=(const Fixed& instance)
{
    _fixedPointNum = instance.getRawBits();
    return *this;
}

Fixed::Fixed(const int num)
{
    int scalingFactor = _fractBits;
    _fixedPointNum = num << scalingFactor;
}

Fixed::Fixed(const float num)
{
    int scalingFactor = 1 << _fractBits;
    _fixedPointNum = roundf(num * scalingFactor);
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const
{ return _fixedPointNum; }

void    Fixed::setRawBits(int const raw)
{ _fixedPointNum = raw; }

float   Fixed::toFloat(void) const
{
    int scalingFactor = 1 << _fractBits;
    float n = static_cast<float>(_fixedPointNum) / scalingFactor;
    return n;
}

int Fixed::toInt(void) const
{
    int scalingFactor = _fractBits;
    return _fixedPointNum << scalingFactor;
}

std::ostream&   operator<<(std::ostream& o, Fixed const& instance)
{
    o << instance.toFloat();
    return o;
}

// the 6 comparison operators
bool Fixed::operator>(const Fixed& instance)
{ return _fixedPointNum > instance.getRawBits(); }

bool Fixed::operator<(const Fixed& instance)
{ return _fixedPointNum < instance.getRawBits(); }

bool Fixed::operator>=(const Fixed& instance)
{ return _fixedPointNum >= instance.getRawBits(); }

bool Fixed::operator<=(const Fixed& instance)
{ return _fixedPointNum <= instance.getRawBits(); }

bool Fixed::operator==(const Fixed& instance)
{ return _fixedPointNum == instance.getRawBits(); }

bool Fixed::operator!=(const Fixed& instance)
{ return _fixedPointNum != instance.getRawBits(); }

// the 4 arithmetic operartors
Fixed   Fixed::operator+(const Fixed& instance)
{ return this->toFloat() + instance.toFloat(); }

Fixed   Fixed::operator-(const Fixed& instance)
{ return this->toFloat() - instance.toFloat(); }

Fixed   Fixed::operator*(const Fixed& instance)
{ return this->toFloat() * instance.toFloat(); }

Fixed   Fixed::operator/(const Fixed& instance)
{ return this->toFloat() / instance.toFloat(); }

//the 2 increment operators
Fixed&  Fixed::operator++()
{
    _fixedPointNum++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed newVal(*this);
    this->operator++();
    return newVal;
}

//the 2 decrement operators
Fixed&  Fixed::operator--()
{
    _fixedPointNum--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed newVal(*this);
    this->operator--();
    return newVal;
}

Fixed&  Fixed::min(Fixed& inst1, Fixed& inst2)
{
    if (inst1 > inst2)
        return inst2;
    return inst1;
}

const Fixed& Fixed::min(const Fixed& inst1, const Fixed& inst2)
{
    if (inst1.getRawBits() > inst2.getRawBits())
        return inst2;
    return inst1;
}

Fixed& Fixed::max(Fixed& inst1, Fixed& inst2)
{
    if (inst1 > inst2)
        return inst1;
    return inst2;
}

const Fixed& Fixed::max(const Fixed& inst1, const Fixed& inst2)
{
    if (inst1.getRawBits() > inst2.getRawBits())
        return inst1;
    return inst2;
}