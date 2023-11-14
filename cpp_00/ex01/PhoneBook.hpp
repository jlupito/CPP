/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:42:50 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/14 18:14:51 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    public:
    
        PhoneBook( void );
        ~PhoneBook( void );
        
        void           add_contact( void );
        void           search_contact( void );
        static void    exit( void );
            
    private:
    
        Contact     _contact[8];
        int         _nbContact;
        void        _displayBook( void );
};

#endif