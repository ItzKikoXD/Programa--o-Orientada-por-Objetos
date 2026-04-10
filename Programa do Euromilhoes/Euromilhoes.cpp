// Crie um programa que simule as apostas do Euromilhões onde inicialmente deverão perguntar ao utilizador se deseja
// apostar numa aposta simples (S) ou múltipla (M). Só existe nesse boletim de apostas 1(uma) a 5 (cinco) chaves de
// apostas, os números de 1 a 50 e as estrelas de 1 a 9, conforme imagem seguinte.
// Devrá ser considerado aonda a hipótese do utilizador, poder decidir que os números e as estrelas são gerados nas
// apostas aleatoriamente; ou introduzidos os valores pelo próprio utilizador.
// Aposta Simples - Só permite 5 números e 2 estrelas.
// Aposta Múltipla - Só permite entre 5 a 11 números, 2 a 9 estrelas

#include <iostream>
#include <random>
using namespace std;

int main() {
    cout << "Bem-vindo ao Euromilhões\n";
    cout << "Escolha o tipo de aposta que deseja realizar:\n\n";
    char tipoAposta;
    cout << "Aposta Simples (carregue 'S') Aposta Múltipla (carregue 'M').\n";
    cin >> tipoAposta;

    if (tipoAposta == 'S' || tipoAposta == 's') {
        cout << "\n-------------Escolheu a Aposta Simples-----------\n";
        int numChaves;
        cout << "Quantas chaves pretende apostar?\n";
        cin >> numChaves;
        
        if (numChaves >= 1 && numChaves <= 5) {
            char gerarAleatorio;
            cout << "\nAposta Gerada Automaticamente (Carregue 'A') ou pelo Próprio (Carregue 'P')?\n";
            cin >> gerarAleatorio;
            
            // Configurar gerador aleatório
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> distNumeros(1, 50);
            uniform_int_distribution<> distEstrelas(1, 9);
            
            for (int chave = 0; chave < numChaves; chave++) {
                int numeros[5];
                int estrelas[2];
                
                if (gerarAleatorio == 'A' || gerarAleatorio == 'a') {
                    // Gerar 5 números aleatórios
                    for (int i = 0; i < 5; i++) {
                        numeros[i] = distNumeros(gen);
                    }
                    
                    // Gerar 2 estrelas aleatórias
                    for (int i = 0; i < 2; i++) {
                        estrelas[i] = distEstrelas(gen);
                    }
                } else {
                    cout << "Introduza 5 numeros entre 1 e 50 para a chave " << chave+1 << ":\n";
                    for (int i = 0; i < 5; i++) {
                        cin >> numeros[i];
                    }
                    cout << "Introduza 2 estrelas entre 1 e 9 para a chave " << chave+1 << ":\n";
                    for (int i = 0; i < 2; i++) {
                        cin >> estrelas[i];
                    }
                }
                
                // Mostrar chave
                cout << "\nChave: ";
                for (int i = 0; i < 5; i++) {
                    cout << numeros[i];
                    if (i < 4) cout << ", ";
                }
                cout << "\nEstrelas: ";
                for (int i = 0; i < 2; i++) {
                    cout << estrelas[i];
                    if (i < 1) cout << ", ";
                }
                cout << "\n";
            }
            cout << "\nBoa sorte!\n";
        } else {
            cout << "Numero de chaves invalido. Deve ser entre 1 e 5.\n";
        }
    } else if (tipoAposta == 'M' || tipoAposta == 'm') {
        cout << "\n-------------Escolheu a Aposta Múltipla-----------\n";
        int numChaves;
        cout << "Quantas chaves pretende apostar?\n";
        cin >> numChaves;
        
        if (numChaves >= 1 && numChaves <= 5) {
            int quantidadeNumeros, quantidadeEstrelas;
            cout << "Quantos numeros deseja apostar? (entre 5 e 11): ";
            cin >> quantidadeNumeros;
            cout << "Quantas estrelas deseja apostar? (entre 2 e 9): ";
            cin >> quantidadeEstrelas;

            if (quantidadeNumeros >= 5 && quantidadeNumeros <= 11 && quantidadeEstrelas >= 2 && quantidadeEstrelas <= 9) {
                char gerarAleatorio;
                cout << "\nAposta Gerada Automaticamente (Carregue 'A') ou pelo Próprio (Carregue 'P')?\n";
                cin >> gerarAleatorio;
                
                // Configurar gerador aleatório
                random_device rd;
                mt19937 gen(rd());
                uniform_int_distribution<> distNumeros(1, 50);
                uniform_int_distribution<> distEstrelas(1, 9);
                
                for (int chave = 0; chave < numChaves; chave++) {
                    int numeros[11];
                    int estrelas[9];
                    
                    if (gerarAleatorio == 'A' || gerarAleatorio == 'a') {
                        // Gerar números aleatórios
                        for (int i = 0; i < quantidadeNumeros; i++) {
                            numeros[i] = distNumeros(gen);
                        }
                        
                        // Gerar estrelas aleatórias
                        for (int i = 0; i < quantidadeEstrelas; i++) {
                            estrelas[i] = distEstrelas(gen);
                        }
                    } else {
                        cout << "Introduza " << quantidadeNumeros << " numeros entre 1 e 50 para a chave " << chave+1 << ":\n";
                        for (int i = 0; i < quantidadeNumeros; i++) {
                            cin >> numeros[i];
                        }
                        cout << "Introduza " << quantidadeEstrelas << " estrelas entre 1 e 9 para a chave " << chave+1 << ":\n";
                        for (int i = 0; i < quantidadeEstrelas; i++) {
                            cin >> estrelas[i];
                        }
                    }
                    
                    // Mostrar chave
                    cout << "\nChave " << chave+1 << ": ";
                    for (int i = 0; i < quantidadeNumeros; i++) {
                        cout << numeros[i];
                        if (i < quantidadeNumeros-1) cout << ", ";
                    }
                    cout << "\nEstrelas: ";
                    for (int i = 0; i < quantidadeEstrelas; i++) {
                        cout << estrelas[i];
                        if (i < quantidadeEstrelas-1) cout << ", ";
                    }
                    cout << "\n";
                }
                cout << "\nBoa sorte!\n";
            } else {
                cout << "Quantidade de numeros ou estrelas inválida para aposta múltipla.\n";
            }
        } else {
            cout << "Numero de chaves invalido. Deve ser entre 1 e 5.\n";
        }
    } else {
        cout << "Tipo de aposta inválido. Por favor escolha S ou M.\n";
    }
    
    return 0;
}