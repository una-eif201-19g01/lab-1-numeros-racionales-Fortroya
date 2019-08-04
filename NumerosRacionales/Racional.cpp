#include <string>
#include "Racional.h"


Racional::Racional(){
	setNumerador(numerador =0);
	setDenominador(denominador =1);
}

Racional::Racional(int numerador, int denominador) : numerador(numerador){}

int Racional::calcularMCD(int num, int den){
	int resultado=0;
	if (den == 0) {
		resultado = num;
	} else {
		resultado = calcularMCD(den, num % den);
	}
	return resultado;
}

void Racional:: simplificarFraccion(Racional &fraccion){
	if(fraccion.numerador !=0){
		int numeroMCD = calcularMCD(abs(fraccion.getNumerador()), fraccion.getDenominador());
		int numerador = fraccion.getNumerador() / numeroMCD;
		int denominador = fraccion.getDenominador() / numeroMCD;
		fraccion.setNumerador(numerador);
		fraccion.setDenominador(denominador);
	}
}

Racional Racional::sumFraccion(Racional fraccion){
	Racional resultado;
	resultado.setNumerador(numerador * fraccion.getDenominador() + getDenominador() * fraccion.getNumerador());
	resultado.setDenominador(denominador *fraccion.getDenominador());
	simplificarFraccion(resultado);
	return resultado;
}
std::string Racional::obtenerString(){
	std::string resultado;
	resultado = std::to_string(getNumerador()) + "/" + std::to_string(getDenominador());
	return resultado;
}

int Racional::getNumerador()const{ 
	return numerador;
}
void Racional::setNumerador(int numerador){
	Racional::numerador=numerador;
}
int Racional::getDenominador()const{
	return denominador;
}
void Racional::setDenominador(int denominador){
	Racional::denominador=denominador;
}

