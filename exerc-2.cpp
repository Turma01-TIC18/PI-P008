#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int tamanhoArray = 100;
    int array[tamanhoArray];

    for (int i = 0; i < tamanhoArray; i++) {
        array[i] = 1 + rand() % 20;
    }

    
    const int tamanhoContagem = 20;
    int contagem[tamanhoContagem] = {0}; 

    for (int i = 0; i < tamanhoArray; i++) {
        contagem[array[i] - 1]++; 
    }

    int maxRepeticoes = 0;

    for (int i = 0; i < tamanhoContagem; i++) {
        if (contagem[i] > maxRepeticoes) {
            maxRepeticoes = contagem[i];
        }
    }

    cout << "Numero que mais aparece no array:" << endl;

    for (int i = 0; i < tamanhoContagem; i++) {
        if (contagem[i] == maxRepeticoes) {
            cout << i + 1 << " ";
        }
    }

    cout << "aparece " << maxRepeticoes << " vezes" << endl;

    return 0;
}