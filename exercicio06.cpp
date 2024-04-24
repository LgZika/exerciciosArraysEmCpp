// Declare um array de caracteres com 5 elementos e preencha-o com caracteres de sua escolha. 
// Utilize uma função para imprimir o tamanho total do array no terminal.

#include <iostream>

using namespace std;

int main(){
    // para ver o tamanho de arrays, arrays de caracteres e arrays de strings
    char caracteres[5] = {'a', 'b', 'c', 'd', 'd'};
    int tam = sizeof(caracteres) / sizeof(caracteres[0]);
    cout << "Tamanho do array \"caracteres\": " << tam << endl;

    // para ver o tamanho de strings
    string palavra = {"Hello, World!"};
    int len = palavra.size();
    cout << "Tamanho da string \"palavra\": " << len << endl;
    return false;
}