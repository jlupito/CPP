/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/28 16:36:08 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {
	
public:
	
	Sample( void ); 
	~Sample( void );
	
// 4 surcharges de fonctions membres bar
// 1 seul nom de fonction mais 4 parametres differents pour chaque fonction de surcharge

	void	bar( char const c ) const;
	void	bar( int const n ) const;
	void	bar( float const z ) const;
	void	bar( Sample const & i ) const;

};

#endif
