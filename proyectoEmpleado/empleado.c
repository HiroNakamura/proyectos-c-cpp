#include "empleado.h"

/*typedef struct{
	char *nombre;
	char *apellidos;
	float sueldoAnual;
}Empleado;
*/

Empleado vendedor;

void almacenarNombre(const char *n){
	vendedor.nombre = (char *)malloc(strlen(n)*sizeof(char));
	vendedor.nombre = strcpy(vendedor.nombre, n);
}

void almacenarApellidos(char *a){
	vendedor.apellidos = (char *)malloc(strlen(a)*sizeof(char));
	vendedor.apellidos = strcpy(vendedor.apellidos, a);
}

void almacenarSueldoAnual(float s){
	vendedor.sueldoAnual = s;	
}

float calcularSueldoMensual(){
	return (vendedor.sueldoAnual/12.0);
}

void mostrarInformacion(){
	puts("========== DATOS ALMACENADOS ==========");
	printf("Nombre: %s",vendedor.nombre);
	printf("Apellidos: %s",vendedor.apellidos);
	printf("Sueldo anual: $ %.3f\n",vendedor.sueldoAnual);	
	printf("Sueldo mensual: $ %.3f\n",calcularSueldoMensual());	
}