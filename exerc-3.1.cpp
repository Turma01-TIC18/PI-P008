#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Função para gerar uma string aleatória de 10 caracteres minúsculos
string gerarStringAleatoria() {
    string resultado;
    for (int i = 0; i < 10; i++) {
        char caractere = 'a' + rand() % ('z' - 'a' + 1);
        resultado += caractere;
    }
    return resultado;
}

// Função para transformar o primeiro caractere em maiúscula
string primeiraLetraMaiuscula(const string& s) {
    string resultado = s;
    if (!s.empty()) {
        resultado[0] = toupper(s[0]);
    }
    return resultado;
}

int main() {
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios com o tempo atual

    string string1 = gerarStringAleatoria();
    string string2 = gerarStringAleatoria();

    cout << "String 1 gerada: " << string1 << endl;
    cout << "String 2 gerada: " << string2 << endl;

    string1 = primeiraLetraMaiuscula(string1);
    string2 = primeiraLetraMaiuscula(string2);

    cout << "String 1 com a primeira letra maiuscula: " << string1 << endl;
    cout << "String 2 com a primeira letra maiuscula: " << string2 << endl;

    // Ordenar as strings em ordem alfabética
    if (string1 < string2) {
        cout << "Ordem alfabetica: " << string1 << ", " << string2 << endl;
    } else {
        cout << "Ordem alfabetica: " << string2 << ", " << string1 << endl;
    }

    return 0;
}