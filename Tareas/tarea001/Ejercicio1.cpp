
#include <iostream>
using namespace std;

int main() {
    const double G = 9.8;
    double tiempo;
    double altura_ventana;
    

    cout << "Ingrse un tiempo de caida: ";
    cin >> tiempo;

    cout << "Ingrse la altura de la ventana: ";
    cin >> altura_ventana;

    if (tiempo <= 0) {
    cout << "tiempo debe ser positivo" << '\n'; 
    }

    else if (altura_ventana <= 0) {
    cout << "Altura de la ventana debe ser positiva" << '\n'; 

    }

    double p1 = ((G*(tiempo*tiempo))/2);
    double h = (((p1-altura_ventana)/tiempo)*((p1-altura_ventana)/tiempo))/(2*G);
    
    
    
    if(h) {
        cout << h << " m" <<'\n'; 
    }
        
    else if (h<=0) {
        cout << "Los datos no coinciden, h debe ser positiva" << '\n';  
    }    
    
    
    
    
    
    
    
    return 0;

    

};








