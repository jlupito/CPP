#include <iostream>

/*
	Permet de definir du code dans lequel on va introdurie des variable de types.
	Ils vont permettre de defuinir des focntion/structrure/classe templates, 
	ce modele pourra etre utilisé par le compil p[oiur instancier les trous 
	ou il ya les variabels de type.
*/

int max(int x, int y) {
	return (x >= y ? x : y);
}

/* on peut remplacer int par T un type quelconque mais systematiquement le meme
	mais je dois acheter une synthaxe
*/

template< typename T >
T max(T x, T y) {
	return (x >= y ? x : y);
}

/* on peut prendre les parametres en references aussi et en const*/
template< typename T >
T const & max(T const & x, T const & y) {
	return (x >= y ? x : y);
}

/* Ensuite il faudra demander au compilateur de faire une instanciation de 
	de notre template, il y a deux moyens:
	- explicite: appeler la fonction et lui mettre entre <> le type dans lequel on veut instancier.
	- implicite: le compilateur le fait tout seul car les prametres sont en int
*/

int main(void) {
	int a = 21;
	int b = 42;

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>( a, b ) << std::endl; // explicit
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max( a, b ) << std::endl; // implicit

	float c = -1.7f;
	float d = 4.2f;

	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float>( c, d ) << std::endl; // explicit
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max( c, d ) << std::endl; // implicit
}

