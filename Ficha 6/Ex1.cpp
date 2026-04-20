//Elabore um programa em C++ que crie uma classe do tipo aluno, com os seguintes
//objectos: char[ ] nome_do_aluno, int número_do_aluno, float nota_esperada.
//A introdução de informação deverá ser feita manualmente, através do cout, cin/gets(). Deve
//limpar o ecrã depois da introdução dos dados, e o output final deverá ser semelhante ao quadro
//seguinte

#include <iostream>
#include <cstring>
using namespace std;


 class aluno {
        public:
        char nome_do_aluno[50];
        int numero_do_aluno;
        float nota_esperada;
    } al1 ;

main () {


cout << "Nome do aluno: ";
gets(al1.nome_do_aluno);

cout << "Numero do aluno: ";
cin >> al1.numero_do_aluno;

cout << "Nota esperada na disciplina de BP: ";
cin >> al1.nota_esperada;

cout << "Prognosticos de BP. \n";
cout << "Nome do aluno: " << al1.nome_do_aluno << "  Numero do aluno: " << al1.numero_do_aluno;
cout << "\nNota esperada na disciplina de BP: " << al1.nota_esperada;
}