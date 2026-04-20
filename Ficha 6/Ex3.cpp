#include <iostream>
#include <cstring>
using namespace std;


 class aluno {
     private:
        float nota_1_teste;
        float nota_2_teste;

        public:
        char nome_do_aluno[50];
        int numero_do_aluno;
        void setNotasn1 (float n1) {nota_1_teste = n1;}
        void setNotasn2 (float n2) {nota_2_teste = n2;}

        float getNotas () {
            return (nota_1_teste, nota_2_teste);
        }
        float nota_final(){
    return  (nota_1_teste + nota_2_teste) / 2; }
    } al1 ;

main () {

cout << "Nome do aluno: ";
gets(al1.nome_do_aluno);
float n1, n2;
cout << "Numero do aluno: ";
cin >> al1.numero_do_aluno;
cout << "Introduza a 1 nota";
cin >> n1; al1.setNotasn1(n1);
cout << "Introduza a 2 nota";
cin >> n2; al1.setNotasn2(n2);

cout << "Prognosticos de BP. \n";
cout << "Nome do aluno: " << al1.nome_do_aluno << "  Numero do aluno: " << al1.numero_do_aluno;
cout << "\nNota final de BP: " << al1.nota_final();
}