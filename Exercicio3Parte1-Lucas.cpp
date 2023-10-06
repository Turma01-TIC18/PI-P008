#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    
    string data;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> data;

    int dia, mes, ano;
    char slash;

    stringstream ss(data);
    ss >> dia >> slash >> mes >> slash >> ano;

    
    bool valida = true;

    if (ano < 0 || mes < 1 || mes > 12 || dia < 1) {
        valida = false;
    } else {
        int diasInmes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Verifica se é um ano bissexto
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            diasInmes[2] = 29;
        }

        if (dia > diasInmes[mes]) {
            valida = false;
        }
    }

    if (valida) {
        cout << "Dia: " << dia << endl;
        cout << "Mês: " << mes << endl;
        cout << "Ano: " << ano << endl;

        // Converte o mês para nome
        string mesNames[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

        cout << "Data por extenso: " << dia << " de " << mesNames[mes] << " de " << ano << endl;
    } else {
        cout << "Data inválida." << endl;
    }

    return 0;
}
