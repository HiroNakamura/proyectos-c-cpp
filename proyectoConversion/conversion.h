#ifndef CONVERSION_H
#define CONVERSION_H
#include <stdio.h>
#include <stdlib.h>


typedef struct{
	float valor;
	int opcion;
}Datos;

extern Datos info;

void almacenarDato(float v, int o);
float conversionCelsius();
float conversionFahrenheit();
void mostrarResultado();

#endif
