/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:43:04 by jlupito           #+#    #+#             */
/*   Updated: 2023/12/14 12:04:57 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaSource : public IMateriaSource {
    
    public:
        MateriaSource( void ); // constructeur par defaut
		MateriaSource( MateriaSource const &copy ); // constructeur de recopie
		virtual ~MateriaSource( void ); // destructeur
		MateriaSource &operator=( const MateriaSource &rhs); // operateur d affectation
    
        virtual void 		learnMateria(AMateria* m);
		virtual AMateria* 	createMateria(std::string const &type);

    private:
        int             _nbItems;
        AMateria*       _inventory[4];
};

#endif