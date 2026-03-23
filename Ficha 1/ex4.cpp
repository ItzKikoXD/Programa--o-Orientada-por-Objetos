#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float cateto1,cateto2,hip;
    
    cout << "Digite o primeiro cateto: ";
    cin >> cateto1;
    cout << "Digite o segundo cateto: "; 
    cin >> cateto2;

    hip = (cateto1*cateto1) *(cateto2*cateto2);

    cout << "A sua hipotenusa e: " << hip/2.0;

  
}

int main2() {
    double cateto1, cateto2;
    double hip;
    
    cout << "Digite o primeiro cateto: ";
    cin >> cateto1;
    cout << "Digite o segundo cateto: "; 
    cin >> cateto2;

    hip = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "A sua hipotenusa e: " << hip;

    return 0;
}
