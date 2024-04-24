// Declare um array de floats com 8 elementos e preencha-o com valores decimais. 
// Utilize um loop while para imprimir apenas os valores maiores que 5 do array.

#include <iostream>

using namespace std;

int main(){
    float numeros[8] = {23.56, 56.78, 999.3, 3.33333, 77.876752437, 88.1212, 1496.2, 3.1415926535};
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    
    for(int i = 0; i < tam; i++){
        if(numeros[i] > 5){
            cout << numeros[i] << endl;
        } 
    }
    return false;
}