// Declare um array de caracteres com 6 elementos e preencha-o com letras do alfabeto. 
// Utilize um loop while para imprimir cada elemento do array no terminal.

#include <iostream>

using namespace std;

int main(){
    char letras[6] = {'L', 'y', 'J', 'K', 'x', 'g'};
    int tam = sizeof(letras) / sizeof(letras[0]);
    int i = 0;
    
    while(i < tam){
        cout << letras[i] << endl;
        i++;
    }
    return false;
}