#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class aluno {
public:
    char nome_do_aluno[50];
    int numero_do_aluno;
    float n1, n2;

    float nota_1_teste();  
    float nota_2_teste();
    float nota_final();
    void mostradados();
};


float aluno::nota_1_teste() {
    n1 = 5 + rand() % 16;
    return n1;
}

float aluno::nota_2_teste() {
    n2 = 5 + rand() % 16;
    return n2;
}

float aluno::nota_final() {
    return (n1 + n2) / 2;
}

void aluno::mostradados() {
    cout << "\n--- Resultados ---\n";
    cout << "Nome do aluno: " << nome_do_aluno << endl;
    cout << "Numero do aluno: " << numero_do_aluno << endl;
    cout << "Nota 1: " << n1 << endl;
    cout << "Nota 2: " << n2 << endl;
    cout << "Nota final: " << nota_final() << endl;
}

int main() {
    srand(time(0));

    aluno al1;

    cout << "Nome do aluno: ";
    cin.getline(al1.nome_do_aluno, 50);

    cout << "Numero do aluno: ";
    cin >> al1.numero_do_aluno;

    al1.nota_1_teste();
    al1.nota_2_teste();

    al1.mostradados();

    return 0;
}