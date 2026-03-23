#include <iostream>
using namespace std;

int main () {
	int numero1 = 0;
	int numero2 = 0;
    int resultado;
    do {
        cout << "Digite um numero inteiro: ";
        cin >> numero1;
        cout << "Digite outro numero inteiro: ";
        cin >> numero2;
        resultado = (numero1 * numero2);
        cout << numero1 << "*" << numero2 << "=" << resultado << "\n";

    } 
	
	while (resultado >= 10 && resultado <= 1000);

        
}
