#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Função para verificar se um ano é bissexto
bool bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Função para verificar se uma data é válida
bool dataValida(int dia, int mes, int ano) {
    if (ano < 0 || mes < 1 || mes > 12 || dia < 1) {
        return false;
    }

    int diasInmes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (bissexto(ano)) {
        diasInmes[2] = 29;
    }

    return (dia <= diasInmes[mes]);
}

// Função para obter o nome do mês por extenso
string nomeMes(int mes) {
    string mesNomes[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    return mesNomes[mes];
}

int main() {
    string data;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    getline(cin, data);

    int dia, mes, ano;
    char teste;

    stringstream ss(data);
    ss >> dia >> teste >> mes >> teste >> ano;

    if (ss.fail() || !ss.eof()) {
        cout << "Formato de data invalido." << endl;
        return 1;
    }

    if (!dataValida(dia, mes, ano)) {
        cout << "Data invalida." << endl;
        return 1;
    }

    cout << "Dia: " << dia << endl;
    cout << "Mes: " << nomeMes(mes) << endl;
    cout << "Ano: " << ano << endl;

    cout << dia << " de " << nomeMes(mes) << " de " << ano << endl;

    return 0;
}