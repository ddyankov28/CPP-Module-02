/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:26:43 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/08 15:09:13 by ddyankov         ###   ########.fr       */
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
        Fixed();                                 // default constructor
        Fixed(const Fixed& instance);            // copy constructor
        Fixed& operator=(const Fixed& instance); // copy assignment operator
        Fixed(const int num);                    // int constructor
        Fixed(const float num);                  // float constructor
        ~Fixed();                                // destructor

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const; 
};

std::ostream& operator<<(std::ostream& o, Fixed const& instance);

# endif