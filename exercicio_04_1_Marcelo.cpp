#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int larguraImagem = 640;
const int alturaImagem = 480;
const int intensidadeMaxima = 256; 

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    vector<vector<int>> imagem(alturaImagem, vector<int>(larguraImagem));

    for (int i = 0; i < alturaImagem; ++i) {
        for (int j = 0; j < larguraImagem; ++j) {
            imagem[i][j] = rand() % intensidadeMaxima;
        }
    }

    vector<int> histograma(intensidadeMaxima, 0);

    for (int i = 0; i < alturaImagem; ++i) {
        for (int j = 0; j < larguraImagem; ++j) {
            int intensidade = imagem[i][j];
            histograma[intensidade]++;
        }
    }

    for (int i = 0; i < intensidadeMaxima; ++i) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
