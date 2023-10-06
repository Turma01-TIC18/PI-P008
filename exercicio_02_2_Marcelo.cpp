#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int numEstacoes = 250;
    double temperaturas[numEstacoes];
    const double tempMinima = 10.0;
    const double tempMaxima = 40.0;

    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < numEstacoes; ++i) {
        temperaturas[i] = tempMinima + (tempMaxima - tempMinima) * (rand() % 100) / 3000.0;
    }

    double tempMax = temperaturas[0];
    double tempMin = temperaturas[0];
    double tempMedia = 0.0;

    for (int i = 0; i < numEstacoes; ++i) {
        tempMedia += temperaturas[i];
        if (temperaturas[i] > tempMax) {
            tempMax = temperaturas[i];
        }
        if (temperaturas[i] < tempMin) {
            tempMin = temperaturas[i];
        }
    }

    tempMedia /= numEstacoes;

    cout << "Temperatura máxima reportada: " << tempMax << " graus" << endl;
    cout << "Temperatura mínima reportada: " << tempMin << " graus" << endl;
    cout << "Temperatura média reportada: " << tempMedia << " graus" << endl;

    for (int i = 0; i < numEstacoes; ++i) {
        if (temperaturas[i] > tempMedia) {
            temperaturas[i] += 1.0;
        } else {
            temperaturas[i] -= 2.0;
        }
    }

    cout << "Temperaturas após a previsão de uma hora:" << endl;
    for (int i = 0; i < numEstacoes; ++i) {
        cout << "Estação " << i + 1 << ": " << temperaturas[i] << " graus" << endl;
    }

    return 0;
}
