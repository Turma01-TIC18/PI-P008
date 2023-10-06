#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int numAlunos = 15;
    float notasAvaliacao1[numAlunos];
    float notasAvaliacao2[numAlunos];
    float medias[numAlunos];

    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < numAlunos; ++i) {
        notasAvaliacao1[i] = ((float)rand() / RAND_MAX) * 10.0;
        notasAvaliacao2[i] = ((float)rand() / RAND_MAX) * 10.0;
    }

    for (int i = 0; i < numAlunos; ++i) {
        if (notasAvaliacao2[i] > notasAvaliacao1[i]) {
            cout << "Aluno " << i + 1 << ": Melhorou" << endl;
        } else if (notasAvaliacao2[i] < notasAvaliacao1[i]) {
            cout << "Aluno " << i + 1 << ": Piorou" << endl;
        } else {
            cout << "Aluno " << i + 1 << ": Manteve a nota" << endl;
        }
    }

    for (int i = 0; i < numAlunos; ++i) {
        medias[i] = (notasAvaliacao1[i] + notasAvaliacao2[i]) / 2.0;
    }

    cout << "Médias dos alunos nas duas avaliações:" << endl;
    for (int i = 0; i < numAlunos; ++i) {
        cout << "Aluno " << i + 1 << ": " << medias[i] << endl;
    }

    return 0;
}
