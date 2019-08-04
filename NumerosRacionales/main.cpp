#include <iostream>
#include"Racional.h"

int main() {
	Racional fraccionA(20, 8);
	Racional fraccionB(10, 4);
	Racional fraccionAux;
	
	std::cout << "\nTutorial -N�meros Racionales-\n" << std::endl;
	
	std::cout << "SIMPLIFICACI�N de Fracci�n A: " << fraccionA.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionA);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << std::endl;
	
	std::cout << "SIMPLIFICACI�N de Fracci�n B: " << fraccionB.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionB.obtenerString() << std::endl;
	
	std::cout << "\nSUMAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.sumFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " + " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	return 0;
}
