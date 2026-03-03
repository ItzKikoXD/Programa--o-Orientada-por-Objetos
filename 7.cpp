#include <iostream>
using namespace std;

 int main() {
    float num1;
    float num2;
    char operacao;
    int conta;
    cout << "Escreva o primeira numero: ";
    cin >> num1;
    cout << "Escreva o segundo numero: ";
    cin >> num2;
cout << "Escreva a operaçao (+,-,*ou /): ";
    cin >> operacao;

    switch(operacao){
        case operacao:
        conta= num1 + num2;
        break;
        case operacao:
        if (num1>num2){
        conta=num1 - num2;
        }
        else{
            conta=num2-num1;
        }
        break;
        case operacao:
        conta=num2*num1;
        break;
        case operacao:{
            conta=num2/num1;
        }
    }
    return 0;
}