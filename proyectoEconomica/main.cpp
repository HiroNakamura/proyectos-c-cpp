#include "economica.cpp"

int main(int argc, char *argv[]){
    Real presente = 0, futuro = 0, tasa = 0;
    Entero plazo = 0;
    int opcion = 0;
    bienvenida();
    for(;;){
        opcion = menu();
        switch (opcion)
        {
        case 1:
            cout << "-Introduce valor futuro: " <<endl;
            cin >> futuro;
            cout << "-Introduce tasa de interes: " <<endl;
            cin >> tasa;
            cout << "-Introduce plazo: " <<endl;
            cin >> plazo;
            almacenarDatos(presente, futuro, tasa, plazo);
            mostrarDatos();
            mostrarResultados(1);
            break;
        case 2:
            cout << "-Introduce valor presente: " <<endl;
            cin >> presente;
            cout << "-Introduce tasa de interes: " <<endl;
            cin >> tasa;
            cout << "-Introduce plazo: " <<endl;
            cin >> plazo;
            almacenarDatos(presente, futuro, tasa, plazo);
            mostrarDatos();
            mostrarResultados(2);
            break;
        case 3:
            cout << "-Introduce valor presente: " <<endl;
            cin >> presente;
            cout << "-Introduce valor futuro: " <<endl;
            cin >> futuro;
            cout << "-Introduce plazo: " <<endl;
            cin >> plazo;
            almacenarDatos(presente, futuro, tasa, plazo);
            mostrarDatos();
            mostrarResultados(3);
            break;
        case 4:
            cout << "-Introduce valor presente: " <<endl;
            cin >> presente;
            cout << "-Introduce valor futuro: " <<endl;
            cin >> futuro;
            cout << "-Introduce tasa de interes: " <<endl;
            cin >> tasa;
            almacenarDatos(presente, futuro, tasa, plazo);
            mostrarDatos();
            mostrarResultados(4);
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Opcion invalida"<<endl;
            break;
        }
    }
    return 0;
}
