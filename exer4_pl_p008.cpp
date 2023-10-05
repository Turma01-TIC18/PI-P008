#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main(){    
    
    int largura = 640, altura = 480;   
    
    // Número total de valores gerados
    int numValores = 1000, numRepeticoes = 256; 

    // Simular a captura da imagem
    int imagem[altura][largura];

    for (int i = 0; i < altura; ++i){

        for (int j = 0; j < largura; ++j){
            // Gera um valor aleatório entre 0 e 255

            imagem[i][j] = rand() % 256;

        }
    }
    // Exibir alguns pixels da imagem 
    cout << "Alguns pixels da imagem:" << endl;
    for (int i = 0; i < 10; ++i){

        for (int j = 0; j < 10; ++j){
            cout << imagem[i][j] << " ";

        }

        cout << "\n" << endl;
    }

    vector<int> valores;
    valores.reserve(numValores);

    for (int i = 0; i < numValores; ++i){
        valores.push_back(rand() % numRepeticoes);

    }

vector<int> histo(numRepeticoes, 0);

    for (int valor : valores){
        histo[valor]++;

    }

    // Encontrar a intensidade com maior repetição
    auto maxRepeticao = max_element(histo.begin(), histo.end());
    int intMaxRep = distance(histo.begin(), maxRepeticao);

    cout << "Histograma:" << endl;
    for (int i = 0; i < numRepeticoes; ++i) {
        cout << i << ": " << histo[i] << endl;
    }

    // Exibir a intensidade com maior repetição
    cout << "Intensidade com Maior Repeticao: " << intMaxRep << " (" << *maxRepeticao << " vezes)" << endl;

return 0;
}