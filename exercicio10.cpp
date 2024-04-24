// Declare um array de inteiros com 8 elementos e preencha-o com valores de sua escolha. 
// Utilize um loop for para imprimir apenas os números que são múltiplos de 3 e maiores que 10 do array.

#include <iostream>

using namespace std;

void input(int *valores, int tam){
    cout << "Entre com um valores para o array:" << endl;
    for(int i = 0; i < tam; i++){
        cout << i << " = ";
        cin >> valores[i];
    }
}

void output(int *valores, int tam){
    cout << "valores inseridos que sao multiplos de 3 e maiores que 10: " << endl;
    for(int i = 0; i < tam; i++){
        if(valores[i] % 3 == 0 && valores[i] > 10){
            cout << "pos " << i << " = " << valores[i] << endl;    
        }
    }
}

int main(){
    int valores[8];
    int tam = sizeof(valores) / sizeof(valores[0]);
    
    input(valores, tam);
    output(valores, tam);
    return false;
}