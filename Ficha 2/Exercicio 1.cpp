#include <iostream>
using namespace std;

 int main() {
    int numero1=0;
    int soma=0;
    do {
        cout << "Escreva um numero entre 1 e 15: ";
        cin >> numero1;
    } 
	
	while (numero1 < 1 || numero1 > 15);

    while (numero1 <= 15) {
        cout << "n= " << numero1;
        cout << "\n";
        soma = soma + numero1;
        numero1++;
    }
    
    cout << "\n Soma final de todos os numeros apresentados: " << soma;
    cout << "\n";
        
    
}
