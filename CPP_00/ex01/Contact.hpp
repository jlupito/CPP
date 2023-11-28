/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:42:43 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/28 11:59:56 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact {
    
    public:
    
    Contact( void );
    ~Contact( void );
    
    std::string	    get_firstName() const;
    std::string	    get_lastName() const;
    std::string	    get_nickName() const;
    std::string	    get_darkSec() const;
    std::string	    get_phNbr() const;
	void	        set_firstName();
	void	        set_lastName();
	void	        set_nickName();
	void	        set_darkSec();
	void	        set_phNbr();
    void            display_contact( int index );
    
    private:
    
    std::string     _firstName;
    std::string     _lastName;
    std::string     _nickName;
    std::string     _phoneNumber;
    std::string     _darkSecret;
    // int             _indexContact;
    bool            _validPhoneNbr( std::string str );
    bool            _validName( std::string str );
    bool            _isBlank( std::string& str );
};

#endif
