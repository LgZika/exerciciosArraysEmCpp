// Declare um array de inteiros com 12 elementos e preencha-o com números de sua escolha. 
// Em seguida, crie um programa que utilize loops for para encontrar e imprimir o valor máximo e o valor mínimo do array.

#include <iostream>

using namespace std;

void input(int *valores, int tam){
    cout << "Entre com valores para o array:" << endl;
    for(int i = 0; i < tam; i++){
        cout << i << " = ";
        cin >> valores[i];
    }
}

void minimoMaximo(int *valores, int tam){
    int valorMaximo = valores[0], valorMinimo = valores[0];

    for(int i = 0; i < tam; i++){
        if(valores[i] >= valorMaximo){
            valorMaximo = valores[i];
        }
        if(valores[i] <= valorMinimo){
            valorMinimo = valores[i];
        }
    }
    cout << "Maior valor no array = " << valorMaximo << endl;
    cout << "Menor valor no array = " << valorMinimo << endl;
}

int main(){
    int valores[12];
    int tam = sizeof(valores) / sizeof(valores[0]);
    
    input(valores, tam);
    minimoMaximo(valores, tam);
    return false;
}