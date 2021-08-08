#include "empleado.c"


int main(){

	char nombreTemporal[100];
	char apellidosTemporal[250];
	float sueldoAnual;

	puts("Introduce la información");
	printf("-Nombre:");
	//gets(nombreTemporal);
	fgets(nombreTemporal, sizeof(nombreTemporal), stdin);
	almacenarNombre(nombreTemporal);
	
	printf("-Apellidos:");
	//gets(apellidosTemporal);
	fgets(apellidosTemporal, sizeof(apellidosTemporal), stdin);
	almacenarApellidos(apellidosTemporal);

	printf("-Sueldo anual:");
	scanf("%f",&sueldoAnual);
	almacenarSueldoAnual(sueldoAnual);

    mostrarInformacion();


	return 0;
}
