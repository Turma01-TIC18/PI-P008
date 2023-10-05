#include <iostream>
#include <vector>

using namespace std;

const int WIDTH = 640;
const int HEIGHT = 480;
const int MAX_INTENSITY = 256;

int main() {
    // Parte A: Geração de uma imagem em tons de cinza
    vector<vector<int>> imagem(WIDTH, vector<int>(HEIGHT));

    // Preencha a matriz de imagem com valores aleatórios entre 0 e 255
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            imagem[i][j] = rand() % MAX_INTENSITY;
        }
    }

    // Parte B: Criação do histograma
    vector<int> histograma(MAX_INTENSITY, 0);

    // Preencha o histograma com a contagem de intensidades na imagem
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            histograma[imagem[i][j]]++;
        }
    }

    // Exibir o histograma
    for (int i = 0; i < MAX_INTENSITY; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}