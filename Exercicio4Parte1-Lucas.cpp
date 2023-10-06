#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int larguraImagem = 640;
const int alturaImagem = 480;
const int intensidadeMaxima = 256;


int main() {
   
    srand(static_cast<unsigned>(time(nullptr)));

   
    int imagem[alturaImagem][larguraImagem];
    int histograma[intensidadeMaxima] = {0};

    for (int i = 0; i < alturaImagem; i++) {
        for (int j = 0; j < larguraImagem; j++) {
            imagem[i][j] = rand() % intensidadeMaxima;
        }
    }

    for (int i = 0; i < alturaImagem; i++) {
        for (int j = 0; j < larguraImagem; j++) {
            int intensidade = imagem[i][j];
            histograma[intensidade]++;
        }
    }

    
    for (int i = 0; i < intensidadeMaxima; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
