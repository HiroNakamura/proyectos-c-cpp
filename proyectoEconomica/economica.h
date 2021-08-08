#ifndef ECONOMICA_H
#define ECONOMICA_H
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

typedef float Real;
typedef int Entero;

typedef struct{
    Real presente;
    Real futuro;
    Real tasa;
    Entero plazo;
}IngeEconomica;

extern IngeEconomica economica;

void bienvenida();
void almacenarDatos(Real presente, Real futuro, Real tasa, Entero plazo);
double obtenerValorPresente();
double obtenerValorFuturo();
double obtenerInteres();
int obtenerPlazo();
int menu();
void mostrarDatos();
void mostrarResultados(int opc);

#endif