
#include <iostream>
using namespace std;

int main() {
    const double t = -273.15;
    const double num1 = 331;
    const double num2 = 0.6;
    double temperatura;
    double velocidad;

    cout << "Ingrese velocidad del objeto: ";
    cin >> velocidad;

    cout << "Ingrese temperatura del aire: ";
    cin >> temperatura;

    if (velocidad <= 0) {
        cout << "Velocidad debe ser mayor a cero" ;
        return 0;
    }
        
    else if (temperatura <= t) {      
        cout << "Temperatura no puede ser menor que el cero absoluto" ; 
        return 0;
    }
    
    
    

    double Vs = ((num1) + (num2*temperatura));
    cout << "Vs: " << Vs << endl;
    

    double M = (velocidad/Vs);
    cout << "M: " << M << endl;

    if (M < 0.8) {
        cout << "Regimen: Subsonico" ;
        

    }  

    else if (0.8 <= M && M <=1.2)  {
        cout << "Regimen: Transonico" ;
        
    }

    else if (1.2 < M && M <= 5.0) {
        cout << "Regimen: Supersonico" ;
        
    }

    else if (M >= 5.0) {
        cout << "Regimen: Hipersonico" ;
        
    }


    return 0;





}