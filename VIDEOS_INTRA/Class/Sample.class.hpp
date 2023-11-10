/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 16:00:11 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {
	
public:

	int	foo; // attribut membre
	
	Sample( void ); // declaration constructeur
	~Sample( void ); //declaration destructeur

	void	bar( void ); // fonction membre
};

#endif
