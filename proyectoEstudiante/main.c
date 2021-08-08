#include "estudiantes.c"


int main(int argc, char *argv[]){
	char nombreTemporal[45];
	char apellidosTemporal[45];
	FILE *alumnos;

	puts("Introduce los datos que se piden");
	puts("- Nombre del estudiante: ");
	fgets(nombreTemporal, sizeof(nombreTemporal), stdin);
	//gets(nombreTemporal);
	puts("- Apellidos del estudiante: ");
	fgets(apellidosTemporal, sizeof(apellidosTemporal), stdin);

	guardarNombreCompleto(nombreTemporal, apellidosTemporal);
	solicitarCalificaciones();

	mostrarInformacion();
	return 0;
}