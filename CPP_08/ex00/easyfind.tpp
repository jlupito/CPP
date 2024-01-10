/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:07:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/10 17:16:39 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template < typename T >
typename T::iterator easyfind(T &container, int value) {
	T::iterator ret = find(container.begin(), container.end(), value);
    if(trouve == lettres.end())
        throw NotFoundException();
    else
        return ret;
}
