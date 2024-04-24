// Declare um array de inteiros com 10 elementos e preencha-o com números de sua escolha. 
// Utilize um loop for para calcular e imprimir a soma de todos os elementos do array.

#include <iostream>

using namespace std;

void input(int *valores, int tam){
    cout << "Entre com um valores para o array:" << endl;
    for(int i = 0; i < tam; i++){
        cout << i << " = ";
        cin >> valores[i];
    }
}

void somatorio(int *valores, int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += valores[i];
    }
    cout << "Soma dos valores inseridos: " << soma << endl;
}

int main(){
    int valores[10];
    int tam = sizeof(valores) / sizeof(valores[0]);
    
    input(valores, tam);
    somatorio(valores, tam);
    return false;
}