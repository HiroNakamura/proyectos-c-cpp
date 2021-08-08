#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAM 7

typedef char Cadena;
typedef int Entero;

typedef struct {
	Cadena *nombre;
	Cadena *apellidos;
	float calificaciones[TAM];
	Entero edad;
}Alumno;

extern Alumno aprendiz;

void guardarNombreCompleto(char *n, char *a);
void solicitarCalificaciones();
void mostrarInformacion();

#endif