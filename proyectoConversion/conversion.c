#include "conversion.h"

Datos info;

/** ALMACENAR DATO **/
void almacenarDato(float v, int o){
	info.valor = v;
	info.opcion = o;
}


/** OBTENER GRADOS CELSIUS **/
float conversionCelsius(){
	return (float)((info.valor - 32.0)*(5.0/9.0));
}

/** OBTENER GRADOS FAHRENHEIT **/
float conversionFahrenheit(){
	return (float) ((info.valor*1.8) + 32.0);
}


/** MOSTRAR DATOS EN PANTALLA **/
void mostrarResultado(){
  printf("Valor introducido = %.2f\n", info.valor);
  switch(info.opcion){
			case 1: 
			printf("Celsius = %.2f\n",conversionCelsius());
			break;
			case 2:
			printf("Fahrenheit = %.2f\n", conversionFahrenheit());
			break;
			default: 
			puts("Opcion no definida\n");
			break;
		}
}
