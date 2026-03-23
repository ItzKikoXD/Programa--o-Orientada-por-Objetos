#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int opcoes;	
	
	cout << "Menu de opções:";
	cout << "\n" << "1 - Executar o programa Calculadora";
	cout << "\n" << "2 - Converter graus centígrados/fahrenheit";
	cout << "\n" << "3 - Converter metros/quilómetros";
	cout << "\n" << "4 - Sair" << "\n";
	cin >>  opcoes;
		
	switch (opcoes) {
		case (1):
			cout << "Calculadora a executar...";
			break;
		case (2):
			cout << "Conversao de temperaturas";
			break;
		case (3):
			cout << "Conversao em distancias";
			break;
		case (4):
			cout << "A terminar o programa";
			break;
	}
}
