#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed para a geração de números aleatórios
    srand(time(0));

    // Defina uma função para gerar um caractere aleatório entre 'a' e 'z'
    auto randomChar = []() {
        return 'a' + rand() % ('z' - 'a' + 1);
    };

    // Crie uma lista de 10 strings aleatórias
    const int numStrings = 10;
    string strings[numStrings];

    for (int i = 0; i < numStrings; i++) {
        for (int j = 0; j < 10; j++) {
            strings[i] += randomChar(); // Adicione 10 caracteres aleatórios em cada string
        }
    }

    // Substitua o primeiro caractere de cada string por maiúscula
    for (int i = 0; i < numStrings; i++) {
        if (!strings[i].empty()) {
            strings[i][0] = toupper(strings[i][0]);
        }
    }

    // Imprima as strings resultantes
    for (int i = 0; i < numStrings; i++) {
        cout << strings[i] << endl;
    }

    return 0;
}