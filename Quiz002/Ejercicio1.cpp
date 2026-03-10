#include <iostream>
using namespace std;

int main() {
    double edad;
    double dia;
    const double Precio_nino = 2500;
    const double Precio_adulto = 4000;
    const double Precio_adultomayor = 2000;

    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    cout << "Tipo de dia: ";
    cin >> dia;

    
    
    
    if (edad<=12) {
        cout << "Categoria: Nino" << '\n';
    }

    else if (dia=1) {
        cout << "Precio base: 2500" << '\n';
        cout << "Recarga: 0" << '\n';
        cout << "Total: 2500" << '\n'; 
    }
    else if (dia=2) {
        cout << "Precio base: 2500" << '\n';
        cout << "Recarga: 500" << '\n';
        cout << "Total: 3000" << '\n';
    }
    

    if (12<edad<64) {
        cout << "Categoria: Adulto" << '\n';

    }
    else if (dia=1) {
        cout << "Precio base: 4000" << '\n';
        cout << "Recarga: 0" << '\n';
        cout << "Total: 4000" << '\n';
    }
    else if (dia=2) {
        cout << "Precio base: 4000" << '\n';
        cout << "Recarga: 800" << '\n';
        cout << "Total: 4800" << '\n';
    }
    
    if (edad>65) {
        cout << "Categoria: Adulto mayor" << '\n';
    }
    else if (dia=1) {
        cout << "Precio base: 2000" << '\n';
        cout << "Recarga: 0" << '\n';
        cout << "Total: 2000" << '\n';
    }
    else if(dia=2) {
        cout << "Precio base: 2000" << '\n';
        cout << "Recarga: 400" << '\n';
        cout << "Total: 24000" << '\n';
    }

    return 0;






















};