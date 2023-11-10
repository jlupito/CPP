/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 18:04:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {
	
public:
	
	Sample( int v ); 
	~Sample( void );

	int	getFoo( void ) const; 
	int	compare( Sample * other ) const;
	
private:

	int		_foo;

};

#endif
