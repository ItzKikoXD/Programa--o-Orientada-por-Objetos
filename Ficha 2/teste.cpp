#include <iostream>
using namespace std;
int main () {
	//	Elabore um programa que peça ao utilizador que introduza sucessivas vezes um número inferior
//	a 100 e que vá calculando o respectivo somatório, o qual vai ser escrito no ecrã, até que o valor desse
//	somatório atinja ou ultrapasse o valor 500. Uma vez terminado esse ciclo deve ser escrito no ecrã a
//	média dos valores válidos introduzidos.

	int contador = 0,n, somatorio  = 0;
		float media;
	
	do {
		cout << "Introduza um numero inferior a 100: " << "\n";
		cin >> n;
	if (n > 100) 
		cout << "Por favor introduza um valor certo";
	
	else {
		somatorio += n;
		cout << " A soma e: " << somatorio << "\n";
		contador =+ 1;
	}
	}
	while (somatorio < 500);
	
		cout << "A media e: " << somatorio/contador << "\n";
}
