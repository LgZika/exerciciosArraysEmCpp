// Declare um array de inteiros com 5 elementos e preencha-o com valores de sua escolha. 
// Em seguida, utilize um loop for para imprimir cada elemento do array no terminal.

#include <iostream>

using namespace std;

int main(){
    int numeros[5] = {23, 56, 999, 3, 77};
    int tam = sizeof(numeros) / sizeof(numeros[3]);
    
    for(int i = 0; i < tam; i++){
        cout << numeros[i] << endl;
    }
    return false;
}