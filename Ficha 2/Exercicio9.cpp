#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main () {
	int numero, pares;
	
	cout << "Introduza um numero: ";
	cin >> numero;
	cout << "A sequencia de pares e o seguinte: ";
	
	for (pares = 0; pares <= numero; pares += 2) {
		cout << pares << "\n";
	}
}
