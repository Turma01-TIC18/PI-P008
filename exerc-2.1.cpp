#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int numEstacoes = 250;

    float temperaturas[numEstacoes];

    for (int i = 0; i < numEstacoes; i++) {
        temperaturas[i] = 10 + 30.0 * (rand() % 100) / 3000.0;
    }

    float temperaturaMaxima = temperaturas[0];
    float temperaturaMinima = temperaturas[0];
    float temperaturaMedia = temperaturas[0];

    for (int i = 1; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
        temperaturaMedia += temperaturas[i];
    }

    temperaturaMedia /= numEstacoes;

    cout << "Temperatura maxima: " << temperaturaMaxima << " graus Celsius" << endl;
    cout << "Temperatura minima: " << temperaturaMinima << " graus Celsius" << endl;
    cout << "Temperatura media: " << temperaturaMedia << " graus Celsius" << endl;

    for (int i = 0; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1.0; 
        } else {
            temperaturas[i] -= 2.0; 
        }
    }

    cout << "Temperaturas apos uma hora:" << endl;
    for (int i = 0; i < numEstacoes; i++) {
        cout << "Estacao " << i + 1 << ": " << temperaturas[i] << " graus Celsius" << endl;
    }

    return 0;
}