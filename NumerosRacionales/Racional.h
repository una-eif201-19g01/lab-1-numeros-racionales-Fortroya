#ifndef RACIONAL_H
#define RACIONAL_H

class Racional {
	int numerador, denominador;
	
	static int calcularMCD(int num, int den);
	
public:
	Racional();
	Racional(int numerador, int denominador);
	
	void simplificarFraccion(Racional &fraccion);
	Racional sumFraccion(Racional fraccion);
	std::string obtenerString();
	
	int getNumerador()const;
	void setNumerador(int numerador);
	int getDenominador()const;
	void setDenominador(int denominador);
	
};

#endif
