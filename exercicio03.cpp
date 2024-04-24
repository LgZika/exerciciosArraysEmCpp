// Declare um array de inteiros com 7 elementos e preencha-o com números de sua escolha. 
// Em seguida, utilize um loop for para imprimir apenas os números pares do array.

#include <iostream>

using namespace std;

int main(){
    int numeros[7] = {23, 56, 999, 3, 77, 88, 1496};
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    
    for(int i = 0; i < tam; i++){
        if(numeros[i] % 2 == 0){
            cout << numeros[i] << endl;
        } 
    }
    return false;
}