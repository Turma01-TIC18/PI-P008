#include <iostream>
#include <cstdlib>  // Para a função rand
#include <ctime>    // Para a função time

using namespace std;

int main() {
    // Inicialize a semente para a função rand usando o tempo atual
    srand(static_cast<unsigned int>(time(0)));

    // Defina o número de estações perigosas
    const int numEstacoes = 250;

    // Crie um array para armazenar as temperaturas
    float temperaturas[numEstacoes];

    // Preencha o array com temperaturas aleatórias entre 10 e 40 graus Celsius
    for (int i = 0; i < numEstacoes; ++i) {
        temperaturas[i] = 10.0 + static_cast<float>(rand() % 310) / 10.0;  // Varia entre 10 e 40 graus
    }

    // Exiba as temperaturas reportadas por cada estação
    cout << "Temperaturas reportadas por cada estacao perigosa:" << endl;
    for (int i = 0; i < numEstacoes; ++i) {
        cout << "Estacao " << i + 1 << ": " << temperaturas[i] << " graus Celsius" << endl;
    }

    return 0;
}

