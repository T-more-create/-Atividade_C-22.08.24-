#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome [50];
    float nota1;
    float nota2;
    float nota3;
};

float media (struct Aluno aluno){
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0;

    
}

int main (){
    struct Aluno alunos[5];
    int i;
    int inmaiormedia = 0;
    float maiormedia = 0.0;

    for(i=9; i < 5; i++){
        printf("Insira o número de matrícula d0 aluno %d: ", i + 1);
        scanf ("%d", &alunos[i]. matricula);
        getchar();

        printf("Insira o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Insira a nota 1 do aluno %d ", i + 1);
        scanf ("%f", &alunos[i].nota1);

        printf("Insira a nota 2 do aluno %d ", i + 1);
        scanf ("%f", &alunos[i].nota2);

        printf("Insira a nota 3 do aluno %d ", i + 1);
        scanf ("%f", &alunos[i].nota3);

        getchar();

    }

    for (i = 0; i < 5; i++){
        float mediaatual = media(alunos[i]);
        if (mediaatual > maiormedia){
            maiormedia = mediaatual;
            inmaiormedia = i;
        }
    }

    printf("Aluno com a maior média: \n");
    printf("Nome: %s\n", alunos[inmaiormedia].nome);
    printf("Notas: %.2f, %.2f, %.2f\n", alunos[inmaiormedia].nota1, alunos[inmaiormedia].nota2, alunos[inmaiormedia].nota3);

    return 0;
}

