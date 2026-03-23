#include <iostream>
using namespace std;

int main() {    
    int numero;
    int desconto;

    cout << "PRODUTOS DA SEMANA DOS DESCONTOS\n 1 - Cereais Nestum, 2 - Sumo Tropical \n 3 - Geleia Morango, 4 - Massa Italiana \n 5 - Arroz Amarelo. 6 - Leite de Soja \n 7 - Coca cola Zero, 8 - Couve de Bruxelas \n Indique o numero do produto: "; cin >> numero;

    

    switch(numero)
    {
        case 1:
            desconto = 20;
            break;

        case 2:
            desconto = 15;
            break;

        case 3:
            desconto = 20;
            break;

        case 4:
            desconto = 10;
            break;

        case 5:
            desconto = 10;
            break;
        case 6:
            desconto = 20;
            break;
        case 7:
            desconto = 15;
            break;
        case 8:
            desconto = 5;
            break;
        default:
            cout << "Escolha invalida" ;
            return 1;
    }

    cout << "Desconto =  " << desconto << "%\n";
    
    cout << "Clique qualquer tecla para continuar";

    return 0;
}
