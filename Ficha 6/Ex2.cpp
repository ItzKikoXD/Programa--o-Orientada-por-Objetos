#include <iostream>
#include <cstring>
using namespace std;


 class aluno {
        public:
        char nome_do_aluno[50];
        int numero_do_aluno;
        float nota_1_teste;
        float nota_2_teste;
        float nota_final(){
    return  (nota_1_teste + nota_2_teste) / 2; }
    } al1 ;

main () {

cout << "Nome do aluno: ";
gets(al1.nome_do_aluno);

cout << "Numero do aluno: ";
cin >> al1.numero_do_aluno;
cout << "Introduza a 1 nota";
cin >> al1.nota_1_teste;
cout << "Introduza a 2 nota";
cin >> al1.nota_2_teste;

cout << "Prognosticos de BP. \n";
cout << "Nome do aluno: " << al1.nome_do_aluno << "  Numero do aluno: " << al1.numero_do_aluno;
cout << "\nNota final de BP: " << al1.nota_final();
}