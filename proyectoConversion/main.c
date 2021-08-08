#include "conversion.c"
#define FIN 0


int main(int argc, char *argv[]){
	float valor;
	int opc = 0;
	if(argc > 2){
		valor = atof(argv[1]);
		opc = atoi(argv[2]);
		almacenarDato(valor, opc);
		mostrarResultado();
	}else{
		puts("El programa requiere al menos un dato de entrada");
		puts("./conversiones VALOR 1[celsius] 2[fahrenheit]");
	}
	return FIN;
}
