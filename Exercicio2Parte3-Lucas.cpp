#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(nullptr));

    
    const int numAlunos = 15;

    
    float notasA[numAlunos];
    cout << "Notas da primeira avaliação:" << endl;
    for (int i = 0; i < numAlunos; ++i) {
        notasA[i] = ((float)rand() / RAND_MAX) * 10;
        cout << "Aluno " << (i + 1) << ": " << notasA[i] << endl;
    }

    
    float notasB[numAlunos];
    cout << "Notas da segunda avaliação:" << endl;
    for (int i = 0; i < numAlunos; ++i) {
        notasB[i] = ((float)rand() / RAND_MAX) * 10;
        cout << "Aluno " << (i + 1) << ": " << notasB[i] << endl;
    }

    
    cout << "Desempenho dos alunos:" << endl;
    for (int i = 0; i < numAlunos; ++i) {
        if (notasB[i] > notasA[i]) {
            cout << "Aluno " << (i + 1) << ": Melhorou" << endl;
        } else if (notasB[i] < notasA[i]) {
            cout << "Aluno " << (i + 1) << ": Piorou" << endl;
        } else {
            cout << "Aluno " << (i + 1) << ": Manteve a nota" << endl;
        }
    }

    
    float medias[numAlunos];
    for (int i = 0; i < numAlunos; ++i) {
        medias[i] = (notasA[i] + notasB[i]) / 2.0;
    }

    cout << "Médias dos alunos:" << endl;
    for (int i = 0; i < numAlunos; ++i) {
        cout << "Aluno " << (i + 1) << ": " << medias[i] << endl;
    }

    return 0;
}
