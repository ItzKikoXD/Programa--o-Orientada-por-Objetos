#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main () {
	char o;
	cout << "Introduza um caracter";	
	cin >> o;
	
	if ((o >= 'A') && (o<= 'Z') || ((o >= 'a') && (o >= 'z')))
	
	cout << "E uma letra";

	else if ((o >= '0') && (o <= '9')) 
	cout << "E um numero";
	
	
	else 
		cout <<"E um simbolo"<< "\n";
	
}
