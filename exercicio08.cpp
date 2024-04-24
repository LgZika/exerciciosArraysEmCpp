// Crie um programa que declare um array de floats com 10 elementos. 
// Solicite ao usuário que insira um valor para cada elemento do array. 
// Em seguida, calcule e imprima a média dos valores fornecidos pelo usuário.

#include <iostream>

using namespace std;

void input(float *notas, int tam){
    cout << "Entre com um valores para o array:" << endl;
    for(int i = 0; i < tam; i++){
        cout << i << " = ";
        cin >> notas[i];
    }
}

void mediaNotas(float *notas, int tam){
    float media;
    for(int i = 0; i < tam; i++){
        media += notas[i];
    }
    media = media / tam;
    cout.precision(3);
    cout << "Media das notas inseridas: " << media << endl;
}

int main(){
    float notas[10];
    int tam = sizeof(notas) / sizeof(notas[0]);
    
    input(notas, tam);
    mediaNotas(notas, tam);
    return false;
}