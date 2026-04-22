//Ejercicio1: Detector de palíndromos

#include <iostream>
#include <string>
using namespace std;


bool es_palindromo(string palabra) {
    
    for (int i = 0; i <= palabra.length(); i++) {
        if (tolower((palabra[i])) != (tolower(palabra[palabra.length() -1 -(i) ]))) {
            return false;
        }
        }
    return true;
    
}

int main()  {

    string Palabra;
    cout << "Ingrese una palabra: " ;
    cin >> Palabra;

    if (es_palindromo(Palabra) == true) {
        cout << Palabra << " es un palindromo." << '\n';
    
    }else if (es_palindromo(Palabra) == false) {
        cout << Palabra << " no es un palindromo." <<  '\n';
    }
    return 0;
}