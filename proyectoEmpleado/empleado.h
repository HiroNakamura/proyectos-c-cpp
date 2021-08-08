#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct{
	char *nombre;
	char *apellidos;
	float sueldoAnual;
}Empleado;

extern Empleado vendedor;


void almacenarNombre(const char *n);
void almacenarApellidos(char *a);
void almacenarSueldoAnual(float s);
float calcularSueldoMensual();
void mostrarInformacion();

#endif