#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;


const int N = 5;

int main(){
     vector<pair<int, string>> pedidos(N);
     queue<string> orden;
     stack<string> historial_atencion; 

     for (int i = 0; i < N; i++){
        string nombre;
        int monto;
        cin >> nombre >> monto;
        pedidos[i] = {monto, nombre};
        orden.push(nombre);
     }

    sort(pedidos.begin(), pedidos.end());
    cout << "Pedidos ordenados por monto: " << '\n';
    
    for (const auto& pedido : pedidos){
        cout << pedido.second << ": " << pedido.first <<  '\n'; 
    }
    auto maximo = max_element(pedidos.begin(), pedidos.end());
    cout << "Pedido mayor: " << maximo->second << "(" << maximo->first << ")" <<'\n';
    
    string buscar;
    cin >> buscar;
    bool encontrar = false;
    for (const auto& pedido : pedidos){
        if (pedido.second == buscar){
            cout << buscar << " pidio por " << pedido.first << " colones" << '\n'; 
            encontrar = true;
            break;
        }
        if (!encontrar){
            cout << buscar << " no hizo pedido " <<  '\n';
        }        
        
    }
    while (!orden.empty()){
        string nombre = orden.front();
        orden.pop();
        cout << "Atendido: " << nombre << '\n';
        historial_atencion.push(nombre);

    }
    string comando;
    cin >> comando;
    if (comando == "deshacer" && !historial_atencion.empty()){
        string tope = historial_atencion.top();
        historial_atencion.pop();
        orden.push(tope);
        cout << tope << " vuelve a al fila " <<  '\n'; 
    }


    return 0;

}