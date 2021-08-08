#include "economica.h"

IngeEconomica economica;

/** BIENVENIDA DEL PROGRAMA **/
void bienvenida(){
    cout<<"\t========= Ingenieria Economica en C++ ========="<<endl;
    cout<<"\t====== Autor: Fernando Carraro Aguirre  ======="<<endl;
    cout<<"\t====== Fecha: 7 agosto de 2021          ======="<<endl;
    cout<<"\t==============================================="<<endl;
}

/** ALMACENAR DATOS **/
void almacenarDatos(Real presente, Real futuro, Real tasa, Entero plazo){
    economica.presente = presente;
    economica.tasa = tasa;
    economica.futuro = futuro;
    economica.plazo = plazo;
}

/** MENU DEL PROGRAMA **/
int menu(){
    int opcion = 0;
    cout << "\n\t ========= MENU DEL PROGRAMA  =======" <<endl;
    cout <<  "\t  1. Calcular valor presente        " <<endl;
    cout <<  "\t  2. Calcular valor futuro          " <<endl;
    cout <<  "\t  3. Calcular tasa de interes       " <<endl;
    cout <<  "\t  4. Calcular plazo                 " <<endl;
    cout <<  "\t  5. Salir del programa             " <<endl;
    do{
        cout << "-Introduzca una opcion: "<<endl;
        cin >> opcion;
    }while(opcion < 0 || opcion > 5);
    return opcion;
}

/** OBTENER VALOR PRESENTE **/
double obtenerValorPresente(){
    return economica.futuro / pow(( 1 + (economica.tasa/100)),economica.plazo);
}

/** OBATNER VALOR FUTURO **/
double obtenerValorFuturo(){
    return economica.presente * pow(( 1 + (economica.tasa/100)),economica.plazo);
}

/** OBTENER TASA DE INTERES **/
double obtenerInteres(){
    return economica.presente*(economica.tasa/100)*economica.plazo;
}

/** OBTENER PLAZO **/
int obtenerPlazo(){
    return log(economica.futuro/economica.presente)/log(1 + (economica.tasa/100));
}

/** MOSTRAR DATOS DE ENTRADA EN PANTALLA **/
void mostrarDatos(){
    cout << "\t ======= DATOS OBTENIDOS =========" <<endl;
    cout << "Valor presente: $"<<economica.presente<<endl;
    cout << "Valor futuro: $"<<economica.futuro<<endl;
    cout << "Tasa: "<<economica.tasa<< "%"<<endl;
    cout << "Plazo: "<<economica.plazo<<endl;
}

/** MOSTRAR RESULTADOS EN PANTALLA**/
void mostrarResultados(int opc){
    cout << "\n\t ======== RESULTADOS =======" <<endl;
    switch (opc)
    {
    case 1:
        cout << "\t-Valor presente obtenido: $"<<obtenerValorPresente()<<endl;
        break;
    case 2:
        cout << "\t-Valor futuro obtenido: $"<<obtenerValorFuturo()<<endl;
        break;
    case 3:
        cout << "\t-Tasa de interes obtenida: "<<obtenerInteres()<< "%"<<endl;
        break;
    case 4:
        cout << "\t-Plazo obtenido: "<<obtenerPlazo()<<endl;
        break;
    }
}

