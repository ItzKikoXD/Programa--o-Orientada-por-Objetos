#include <iostream>
#include <cstring>
using namespace std;

char FrutasEscolhidas[100];

void Frutas(char *fruta1, char *fruta2) {
    
    FrutasEscolhidas[0] = '\0'; // inicia numa empty string

    strcat(FrutasEscolhidas, fruta1);
    strcat(FrutasEscolhidas, " e ");
    strcat(FrutasEscolhidas, fruta2);

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