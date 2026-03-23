//  Crie um programa que:
// A. Peça ao utilizador 4 números inteiros.
// B. Guarde os valores num array.
// C. Crie uma função que multiplique todos os elementos do array entre si.
// D: A função deve devolver o resultado da multiplicação.

#include <iostream>
using namespace std;

int multiplicacao(int v[], int tamanho) {
    int resultado = 1;
    for (int i = 0; i < tamanho; i++) {
        resultado *= v[i];
    }
    return resultado;
}

int main() {
    int numeros[4];
    cout << "Introduza 4 numeros inteiros:\n";
    for (int i = 0; i < 4; i++) {
        cin >> numeros[i];
    }

    int resultado = multiplicacao(numeros, 4);
    cout << "Resultado da multiplicacao = " << resultado << endl;
    return 0;
}