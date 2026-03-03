#include <iostream>
using namespace std;

int main(){
    int i = 1;
    
    while (i <= 5){
        cout << " Dobro de " << i << " = " << i * 2 << "\n";
        i++;
    }
    
    for(int x=0; x<5; x++){
        cout << " Dobro de " << x << " = " << x * 2 << "\n";
    }

    int notas;
    cout << "Digita a nota: "; 
    cin >> notas;
    
    int algo;
    algo = notas;  
    if (algo < 0){
        algo = 1;  
    }
    else if (algo < 10)
    {
        algo = 2;
    }
    else if (algo < 14)  
    {
        algo = 3;  
    }
    else if (algo < 18){
        algo = 4;  
    }
    else{
        algo = 5;
    }
    switch(algo) {
        case 1:
            if (notas < 0) cout << "Nota nao valida \n"; 
            break;
        case 2:
            if (notas < 10) cout << " Reprovado \n"; 
            break;
        case 3:
            if (notas < 14) cout << " Suficiente \n"; 
            break;
        case 4:
            if (notas < 18) cout << " Bom \n"; 
            break;
        case 5:
            if (notas <= 20) cout << " Muito Bom \n"; 
            break;
    }
    return 0;
}