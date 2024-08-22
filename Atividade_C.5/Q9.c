#include <stdio.h>
#include <string.h>
#define MAX_ATLETAS 5

typedef struct {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} Atleta;

int main() {
    Atleta atletas[MAX_ATLETAS];
    Atleta maisVelho, maisAlto;

    for (int i = 0; i < MAX_ATLETAS; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].nome);

        printf("Digite o esporte do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].esporte);

        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);

        printf("Digite a altura (em metros) do atleta %d: ", i + 1);
        scanf("%f", &atletas[i].altura);

        printf("\n");
    }

    maisVelho = maisAlto = atletas[0];

    for (int i = 1; i < MAX_ATLETAS; i++) {
        if (atletas[i].idade > maisVelho.idade) {
            maisVelho = atletas[i];
        }
        if (atletas[i].altura > maisAlto.altura) {
            maisAlto = atletas[i];
        }
    }

    printf("O atleta mais velho é: %s\n", maisVelho.nome);
    printf("O atleta mais alto é: %s\n", maisAlto.nome);

    return 0;
}
