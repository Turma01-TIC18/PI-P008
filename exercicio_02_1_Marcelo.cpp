#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int tamanhoArray = 100;
    const int valorMinimo = 1;
    const int valorMaximo = 20;
    int array[tamanhoArray];
    int contagem[valorMaximo] = {0};

    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < tamanhoArray; ++i) {
        array[i] = valorMinimo + rand() % (valorMaximo - valorMinimo + 1);
    }

    for (int i = 0; i < tamanhoArray; ++i) {
        contagem[array[i] - 1]++;
    }

    int maxContagem = 0;
    for (int i = 0; i < valorMaximo; ++i) {
        if (contagem[i] > maxContagem) {
            maxContagem = contagem[i];
        }
    }

    cout << "Número(s) que mais vezes aparecem: ";
    for (int i = 0; i < valorMaximo; ++i) {
        if (contagem[i] == maxContagem) {
            cout << i + 1 << " ";
        }
    }
    cout << "(aparece " << maxContagem << " vezes)" << endl;
    cout << "" << endl;
    
    return 0;
}
