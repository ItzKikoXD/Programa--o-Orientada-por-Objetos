#include <iostream>
#include <string>  
using namespace std;

char FrutasEscolhidas[100];

void Frutas(char fruta1[], char fruta2[]){
  
    strcat(FrutasEscolhidas, fruta1, " e ", fruta2); 

    cout << "Frase final: " << FrutasEscolhidas;
}

int main() {
    char fruta1[40];
    char fruta2[40];

    cout << "Escreva um nome de fruta: ";
    cin >> fruta1;

    cout << "Escreva outro nome de fruta: ";
    cin >> fruta2;

    Frutas(fruta1, fruta2);

    return 0;
}