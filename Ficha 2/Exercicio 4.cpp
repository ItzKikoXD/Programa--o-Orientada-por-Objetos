#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main () {
	int v [5];
	int i;
	for (i = 0; i < 5; i++) {
		cout << "Indique um valor para o vetor v ["<< i << "]:";
		cin >> v[i];
	}
	
	for (i = 4; i >= 0; i--) {
		cout << v[i];
	}
	
}
