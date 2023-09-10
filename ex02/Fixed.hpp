/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:18:38 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/10 11:13:30 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int              _fixedPointNum;
        static const int _fractBits = 8;
    public:
        Fixed();                                //default construct
        Fixed(const Fixed& instance);           //copy construct
        Fixed&  operator=(const Fixed& instance);//copy assign oper
        Fixed(const int num);                   //int construct
        Fixed(const float num);                 //float construct
        ~Fixed();                               //destructor
        bool    operator>(const Fixed& instance);  //greater
        bool    operator<(const Fixed& instance);  //smaller
        bool    operator>=(const Fixed& instance); //greater or equal
        bool    operator<=(const Fixed& instance); //smaller or equal
        bool    operator==(const Fixed& instance); //equal
        bool    operator!=(const Fixed& instance); //not equal
        Fixed   operator+(const Fixed& instance); //addition
        Fixed   operator-(const Fixed& instance); //substraction
        Fixed   operator*(const Fixed& instance); //multiplication
        Fixed   operator/(const Fixed& instance); //division
        Fixed&  operator++();                    //pre-increment
        Fixed   operator++(int);                  //post-increment
        Fixed&  operator--();                    //pre-decrement
        Fixed   operator--(int);                  //post-decrement
        static Fixed&   min(Fixed& inst1, Fixed& inst2);
        static const Fixed&     min(const Fixed& inst1, const Fixed& inst2);
        static Fixed&   max(Fixed& inst1, Fixed& inst2);
        static const Fixed&     max(const Fixed& inst1, const Fixed& inst2);   
        
        
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const& instance);

# endif