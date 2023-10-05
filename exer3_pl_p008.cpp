#include <iostream>
#include <sstream>

using namespace std;

bool validarData(int dia, int mes, int ano){
    
    if (ano <= 0) {
        return false;

    }

    if (mes < 1 || mes > 12){
        return false;

    }
    if (dia < 1 || dia > 31){
        return false;

    }
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){
        return false;

    }

return true;
}

int main() {
    int dia, mes, ano;
    char remover;

    
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    string dataInput;

    stringstream ss(dataInput);

    ss >> dia >> remover >> mes >> remover >> ano;

    // Verificar se a data é válida
    if (validarData(dia, mes, ano)) {
        cout << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Ano: " << ano << endl;
    } else {
        cout << "Data invalida." << endl;
    }

    return 0;
}