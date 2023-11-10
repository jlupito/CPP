/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 16:59:12 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {
	
public:

	int	publicFoo;
	
	Sample( void ); // constr/destruc souvent dans la partie public
	~Sample( void );

	void	publicBar( void ); 
	
private:

	int		_privateFoo;

	void	_privateBar( void );

};

#endif
