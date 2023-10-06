#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(nullptr));

    
    const int numEstacoes = 250;
    double temperaturas[numEstacoes];

    for (int i = 0; i < numEstacoes; ++i) {
        temperaturas[i] = 10.0 + 30.0 * (rand() % 100) / 3000.0;
    }

    
    double temperaturaMaxima = temperaturas[0];
    double temperaturaMinima = temperaturas[0];

    for (int i = 1; i < numEstacoes; ++i) {
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
    }

    cout << "Temperatura máxima reportada: " << temperaturaMaxima << " graus Celsius" << endl;
    cout << "Temperatura mínima reportada: " << temperaturaMinima << " graus Celsius" << endl;

    
    double somaTemperaturas = 0.0;

    for (int i = 0; i < numEstacoes; ++i) {
        somaTemperaturas += temperaturas[i];
    }

    double temperaturaMedia = somaTemperaturas / numEstacoes;

    cout << "Temperatura média reportada: " << temperaturaMedia << " graus Celsius" << endl;

    
    for (int i = 0; i < numEstacoes; ++i) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1.0; 
        } else {
            temperaturas[i] -= 2.0; 
        }
    }

    
    cout << "Temperaturas atualizadas após a previsão do modelo:" << endl;
    for (int i = 0; i < numEstacoes; ++i) {
        cout << "Estação " << (i + 1) << ": " << temperaturas[i] << " graus Celsius" << endl;
    }

    return 0;
}
