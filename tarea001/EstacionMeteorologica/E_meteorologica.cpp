#include <iostream> 
#include <string> 
#include <vector> 
#include <numeric>
#include <algorithm>
using namespace std; 


class EstacionMeteorologica { 
    
private: 
    string nombre; 
    vector<double> temperatura; 

public: 
//Constructor parametrizado
EstacionMeteorologica(string nombre){ 
    this->nombre = nombre; 
}
    
    EstacionMeteorologica(){ 
        nombre = " Estacion sin nombre"; 

    } 
    //Registrar lectura
    bool registrarLectura(double temperatura){
         if (temperatura >= -50 && temperatura <= 60){
            this->temperatura.push_back(temperatura); 
            return true; 
        } 
        else{
            return false;
        } 
     
}
double promedio(){ 
    double suma = accumulate(temperatura.begin(), temperatura.end(), 0.0);
    return suma/ temperatura.size();
} 

double maxima(){
    double max = *max_element(temperatura.begin(), temperatura.end());
    return max; 

 }
 
string getNombreEstacion(){
    return nombre;
}
int getCantidadLecturas(){
    return temperatura.size();

}
};
int main(){
    string nombre;
    getline(cin, nombre);

    EstacionMeteorologica estacion(nombre);

    int M;
    cin >> M;

    for (int i = 0; i < M; i++){
        string comando;
        cin >> comando;
        
        if (comando == "registrar"){
            double temperatura;
            cin >> temperatura;
            
            if (estacion.registrarLectura(temperatura)){
                cout << "Lectura registrada: " << temperatura << '\n';  
            }
            else{
                cout << "Error: La temperatura debe estar entre -50 y 60." << '\n';
            }

       
       
        }
        
        else if (comando == "promedio"){
            
            if (estacion.getCantidadLecturas() == 0){
                cout << "Sin lecturas registradas." <<'\n';
            }
            else{
                cout << "Promedio: " << estacion.promedio() <<  '\n';
            }
             
        }

        else if (comando == "maxima"){
            if(estacion.getCantidadLecturas() == 0){
                cout << "Sin lecturas registradas." <<'\n';
            }
            else{
                cout << "Maxima: " << estacion.maxima() << '\n';
            }
            
        }

        else if (comando == "cantidad"){
            cout << estacion.getNombreEstacion() << " - Lecturas registradas: " << estacion.getCantidadLecturas() <<'\n';  
        }

}
     
 
    return 0; 

}