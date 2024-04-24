// Declare um array de inteiros vazio com espaço para 10 elementos. 
// Peça ao usuário para inserir valores para cada elemento do array. 
// Em seguida, utilize um loop for para imprimir os valores do array no terminal.

#include <iostream>

using namespace std;

void input(int *numeros, int tam){
    cout << "Entre com um valores para o array:" << endl;
    for(int i = 0; i < tam; i++){
        cout << i << " = ";
        cin >> numeros[i];
    }
}

void output(int *numeros, int tam){
    for(int i = 0; i < tam; i++){
        if(numeros[i] > 5){
            cout << numeros[i] << endl;
        } 
    }
}

int main(){
    int numeros[10];
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    
    input(numeros, tam);
    output(numeros, tam);
    
    return false;
}