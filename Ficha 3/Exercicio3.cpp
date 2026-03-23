#include <iostream>
using namespace std;

int main(){
    
    int notas[6];
    int* p = notas; // ponteiro aponta para o array
    int i;

    for(i = 0; i < 6; i++){
        cout << "Introduza a nota: ";
        cin >> *(p + i);   // igual a notas[i]
    }

    cout << "Notas: ";
    for(i = 0; i < 6; i++){
        cout << *(p + i) << " ";  // igual a notas[i]
    }

    for(i = 0; i < 6; i++){
        *(p + i) = *(p + i) + 1;  // igual a notas[i]++
    }

    cout << "\nNotas +1: ";
    for(i = 0; i < 6; i++){
        cout << *(p + i) << " ";
    }

    return 0;
}