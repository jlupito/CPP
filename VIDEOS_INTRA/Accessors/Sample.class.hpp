/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 17:38:05 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {
	
public:
	
	Sample( void ); 
	~Sample( void );

	int		getFoo( void ) const; // j accede en lecture seulement donc const
	void	setFoo( int v );
	
private:

	int		_foo;

};

#endif
