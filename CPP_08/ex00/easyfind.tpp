/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:07:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 10:35:50 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template < typename T >
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator ret = find(container.begin(), container.end(), value);
    if (ret == container.end())
        throw NotFoundException();
    else
        return ret;
}
