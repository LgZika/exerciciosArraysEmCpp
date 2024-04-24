// Dado o array de inteiros: {3, 7, 9, 12, 4, 6, 8, 10}, imprima no terminal:
//     O terceiro elemento do array.
//     A soma do sexto elemento com o oitavo elemento.
//     A diferença entre o segundo elemento e o primeiro.
//     O quarto elemento se for maior que 6.
//     O último elemento se o primeiro for par.
//     O primeiro elemento se a soma do quarto com o oitavo for maior que 22.

#include <iostream>

using namespace std;

int main(){
    int numeros[] = {3, 7, 9, 12, 4, 6, 8, 10};             // se o array for inicializado com valores e sem tamanho ele atribuira a quantidade de elementos para seu tamanho
                                    
    cout << "Terceiro elemento do array: " << numeros[2] << endl;
    cout << "A soma do sexto elemento com o oitavo elemento: " << numeros[5] + numeros[7] << endl;
    cout << "A diferenca entre o segundo elemento e o primeiro: " << numeros[1] - numeros[0] << endl;
    
    if(numeros[3] > 6){
        cout << "O quarto elemento se for maior que 6: " << numeros[3] << endl;
    }

    if(numeros[0] % 2 == 0){
        cout << "O ultimo elemento se o primeiro for par: " << numeros[3] << endl;
    }

    if(numeros[3] + numeros[7] > 22){
        cout << "O primeiro elemento se a soma do quarto com o oitavo for maior que 22: " << numeros[3] << endl;
    }
    return false;
}