/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:42:00 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/08 13:10:18 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int              _fixedPointNum;
        static const int _fractBits = 8;
    public:
        Fixed();                                 // constructor
        Fixed(const Fixed& instance);            // copy constructor
        Fixed& operator=(const Fixed& instance); // copy assignment operator
        ~Fixed();                                // destructor

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

# endif