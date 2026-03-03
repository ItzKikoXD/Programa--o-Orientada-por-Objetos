#include <iostream>
using namespace std;

int main() {
    float num1;
    float num2;
    float conta;
    char operacao;

    cout << "Escreva o primeiro numero: ";
    cin >> num1;

    cout << "Escreva o segundo numero: ";
    cin >> num2;

    cout << "Escreva a operacao (+, -, * ou /): ";
    cin >> operacao;

    switch(operacao)
    {
        case '+':
            conta = num1 + num2;
            break;

        case '-':
            conta = num1 - num2;
            break;

        case '*':
            conta = num1 * num2;
            break;

        case '/':
                conta = num1 / num2;

        default:
            cout << "Operacao invalida" ;
            return 1;
    }

    cout << "Resultado: " << conta;

    return 0;
}