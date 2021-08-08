#include "estudiantes.h"


Alumno aprendiz;

/** Guardar nombre **/
void guardarNombreCompleto(char *n, char *a){
	aprendiz.nombre = (char *) malloc(strlen(n)*sizeof(char));
	aprendiz.nombre = strcpy(aprendiz.nombre, n);
	aprendiz.apellidos = (char *) malloc(strlen(a)*sizeof(char));
	aprendiz.apellidos = strcpy(aprendiz.apellidos, a);
}

/** Solicitar calficaciones **/
void solicitarCalificaciones(){
	for(int i=0; i < TAM; i++){
		printf("Ingresa calificacion %d : \n",(i+1));
		scanf("%f",&aprendiz.calificaciones[i]);
		aprendiz.calificaciones[i] = aprendiz.calificaciones[i];
	}
}


/** Mostrar informacion **/
void mostrarInformacion(){
	float suma;
	printf("Nombre completo: %s",strcat(aprendiz.nombre, aprendiz.apellidos));
	puts("Calificaciones:");
	for(int i=0; i < TAM; i++){
		printf("%f\n", aprendiz.calificaciones[i]);
		suma += aprendiz.calificaciones[i];
	}
	printf("Promedio obtenido: %.2f\n", (suma/TAM));
}
