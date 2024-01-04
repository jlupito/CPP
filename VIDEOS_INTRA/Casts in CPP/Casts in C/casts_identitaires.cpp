/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casts_identitaires.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:52:05 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 16:13:03 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// cast identitaire = REINTERPRETATION
// la val de base apres conversion garde les memes bits dans le meme ordre

int main(void) {
	
	float a = 420.042f; // valeur de reference

	void * b = &a; // implicit reinterpretation cast
	void * c = (void *) &a; // explicit reinterpretation cast : perdu en precision, gagné en generalité

	void * d = &a; // Implicit promotion : ca cest OK
	int * e = d; // Implicit demotion : dangereux car codages en bit differents
	int * f = (int *) d; // explicit demotion : preferable !
}