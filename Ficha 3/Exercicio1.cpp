#include <iostream>
#include <string>
using namespace std;

int main() {
    char palavra[50];
    int i;

    cout << "Insira uma palavra: ";
    cin >> palavra;

    cout << "Normal: " << palavra;

    cout << "\nContrario: "; 
    for (i = strlen (palavra) - 1; i >= 0; i--) {
        cout << palavra[i];
    }
    return 0;
}