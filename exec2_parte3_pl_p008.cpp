#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand((unsigned)time(NULL));

    const int numAlunos = 15;

    float notasAvaliacao1[numAlunos];
    float notasAvaliacao2[numAlunos];

    for (int i = 0; i < numAlunos; ++i){
        notasAvaliacao1[i] = ((float)rand() / RAND_MAX) * 10;
        notasAvaliacao2[i] = ((float)rand() / RAND_MAX) * 10;

    }

    // Exiba as notas dos alunos para ambas as avaliações
    printf("Notas dos alunos:\n");
    for (int i = 0; i < numAlunos; ++i){
        printf("%d: Avaliacao 1: %.2f Avaliacao 2: %.2f\n", i 
        + 1, notasAvaliacao1[i], notasAvaliacao2[i]);

    }

    // Verifique se as notas melhoraram ou pioraram
    printf("\nComparacao das notas:\n");

    for (int i = 0; i < numAlunos; ++i){
        float media = (notasAvaliacao1[i] + notasAvaliacao2[i]) / 2;
        printf("%d: Media: %.2f ", i + 1, media);

        if (notasAvaliacao2[i] > notasAvaliacao1[i]) {
            printf("Melhorou\n");

        } 
        else if (notasAvaliacao2[i] < notasAvaliacao1[i]) {
            printf("Piorou\n");

        } 
        else {
            printf("Permaneceu a mesma\n");

        }
    }

return 0;
}
