// Declare dois arrays de floats, um para armazenar as notas e outro para armazenar os pesos correspondentes. 
// Ambos os arrays devem ter 5 elementos. Solicite ao usuário que insira notas para as notas e os pesos. 
// Em seguida, calcule e imprima a média ponderada das notas, 
// onde a média ponderada é calculada pela soma das multiplicações de cada nota pelo seu peso correspondente, 
// dividida pela soma total dos pesos.

#include <iostream>

using namespace std;

void input(float *notas, float *pesos, int tam){
    cout << "Entre com as notas e o peso das notas para o array (no formato: nota espaco peso):" << endl;
    for(int i = 0; i < tam; i++){
        //cin.ignore();
        cout << "pos " << i << " = ";
        cin >> notas[i] >> pesos[i];
    }
}

void calcularMediaPonderada(float *notas, float *pesos, int tam){
    float numerador = 0, denominador = 0;
    for(int i = 0; i < tam; i++){
        numerador += notas[i] * pesos[i];
        denominador += pesos[i];
    }
    cout << "Media ponderada dos valores inseridos = " << numerador / denominador << endl;
}

int main(){
    float notas[5], pesos[5];
    int tam = sizeof(notas) / sizeof(notas[0]);
    
    input(notas, pesos, tam);
    calcularMediaPonderada(notas, pesos, tam);
    return false;
}