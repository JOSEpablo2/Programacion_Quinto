//Ejercicio2: Analizador de triangulos

#include <iostream>
using namespace std;

bool es_valido(int a, int b, int c) {
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        return true;
    }
    return false;
}

string tipo_triangulo(int a, int b, int c) {
    if ((a == b) && (a == c) && (b == c )) {
        return "equilatero";
    }
    else if ((a == b && a != c) || (b == c && b != a ) || (a == c && a != b)) {
        return "isosceles";
    }
    
    else if (a != b != c) {
        return "escaleno"; 
    }
}

int calcular_perimetro(int a, int b, int c) {
    return a + b + c; 
    
}
void describir_triangulo(int a, int b, int c) {
    if(es_valido(a,b,c) == true) {
    cout << "Tipo: " << tipo_triangulo(a,b,c) << '\n';
    cout << "Perimetro: " << calcular_perimetro(a,b,c) << '\n';
    }
    else if (es_valido(a,b,c) == false){
        cout << "Triangulo invalido.";
    }


}

int main() {
    int a;
    int b;
    int c;
    cout << "Ingrese los lados de un triangulo: " ;
    cin >> a;
    cin >> b;
    cin >> c;

    describir_triangulo(a,b,c); 
    



    return 0;
}