#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(nullptr));

    
    const int tamanhoArray = 100;
    int valoresAleatorios[tamanhoArray];

    for (int i = 0; i < tamanhoArray; ++i) {
        valoresAleatorios[i] = 1 + rand() % 20;
    }

    for (int i = 0; i < tamanhoArray; ++i) {
        cout << valoresAleatorios[i] << " ";
    }

    
    int frequencia[20] = {0};

    for (int i = 0; i < tamanhoArray; ++i) {
        frequencia[valoresAleatorios[i] - 1]++; // -1 porque os valores estão entre 1 e 20, mas o índice do array começa em 0
    }

    
    int maxFrequencia = 0;
    cout << "Valores que mais vezes aparecem no array:" << endl;

    for (int i = 0; i < 20; ++i) {
        if (frequencia[i] > maxFrequencia) {
            maxFrequencia = frequencia[i];
        }
    }

    for (int i = 0; i < 20; ++i) {
        if (frequencia[i] == maxFrequencia) {
            cout << "Número " << (i + 1) << " aparece " << maxFrequencia << " vezes." << endl;
        }
    }

    return 0;
}
