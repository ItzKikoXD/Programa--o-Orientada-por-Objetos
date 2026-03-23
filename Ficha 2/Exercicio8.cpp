#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main () {
float quantidade, preco, p_q, desconto, total;

cout <<"introduza a quantidade"<< "\n";
cin >>quantidade;
cout <<"introduza o preco do material" << "\n";
cin >>preco;

p_q=quantidade*preco;

	if (quantidade>=1000) {
		desconto=p_q*0.08; total=p_q-desconto;
		cout <<"o desconto foi: " <<desconto <<" o total a pagar e: " <<total;
	}
	else
	if (quantidade>=500) {
		desconto=p_q*0.05;
		total=p_q-desconto;
		cout <<"o desconto foi: " <<desconto <<" o total a pagar e: "
		<<total;
	}
	else
		cout <<"não houve desconto, o total a pagar e: " <<p_q;
	}
