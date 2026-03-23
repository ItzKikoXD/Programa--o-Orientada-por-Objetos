#include <iostream>
using namespace std;

int main(){

    int notas[6];
    int i;

    for(i=0; i<6; i++){
        cout << "Introduza a nota: ";
        cin >> notas[i];
    }

    cout << "Notas: ";
    for(i=0; i<6; i++){
        cout << notas[i] << " ";
    }

    for(i=0; i<6; i++){
        notas[i] = notas[i]+1;
    }

    cout << "\nNotas +1: ";
    for(i=0; i<6; i++){
        cout << notas[i] << " ";
    }

}