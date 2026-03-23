// Crie um programa que:
// A.Peça ao utilizador 5 números inteiros e guarde-os num array.
// B.Crie uma função que conte quantos números são positivos.
// C.A função deve devolver o total de números positivos.
#include <iostream>
using namespace std;

int contaPositivos(int v[], int tamanho) {
    int contador = 0;
    tamanho = 5;
    for (int i = 0; i <= tamanho; i++) {
        if (v[i] > 0) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int numeros[5];
    cout << "Introduza 5 numeros inteiros:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }
 
    int total = contaPositivos(numeros, 5);
    cout << "Total de numeros positivos = " << total << endl;
    return 0;
}