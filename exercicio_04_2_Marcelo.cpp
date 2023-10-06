#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

 
string gerarStringAleatoria(int tamanho) {
    string str;
    for (int i = 0; i < tamanho; ++i) {
        char caractere = 'a' + rand() % ('z' - 'a');
        str += caractere;
    }
    return str;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    vector<string> stringsAleatorias;
    for (int i = 0; i < 10; ++i) {
        string str = gerarStringAleatoria(10);
        if (!str.empty()) {
            str[0] = toupper(str[0]); 
        }
        stringsAleatorias.push_back(str);
    }

    for (int i = 0; i < 10; ++i) {
        cout << "String " << i + 1 << ": " << stringsAleatorias[i] << endl;
    }

    return 0;
}
