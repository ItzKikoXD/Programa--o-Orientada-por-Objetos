#include <iostream>
using namespace std;

 int main() {
    float nota1 = 15;
    float nota2 = 10;
    cout << "Escreva a primeira nota: " << nota1;
    cout << "\n Escreva a segunda nota: " << nota2;

    float media = (nota1+nota2) / 2; 

    if (media >= 9.5) {
        cout << "\n Aprovado. Com média de: " << media;
    }
    else {
        cout << "\n Reprovado. Com média de: " << media;
    }

    return 0;
}