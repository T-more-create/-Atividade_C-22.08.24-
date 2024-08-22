#include <stdio.h>
#include <string.h>
#define MAX_PESSOAS 6

typedef struct {
    char nome[50];
    int dia;
    int mes;
    int ano;
} Pessoa;

int compararDataNascimento(Pessoa p1, Pessoa p2) {
    if (p1.ano != p2.ano)
        return p1.ano - p2.ano; 
    if (p1.mes != p2.mes)
        return p1.mes - p2.mes; 
    return p1.dia - p2.dia; 
}

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    Pessoa maisVelha, maisNova;

    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("Insira o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Insira a data de nascimento (dia mes ano) da pessoa %d: ", i + 1);
        scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
    }

    maisVelha = maisNova = pessoas[0];

    for (int i = 1; i < MAX_PESSOAS; i++) {
        if (compararDataNascimento(pessoas[i], maisVelha) < 0) {
            maisVelha = pessoas[i];
        }
        if (compararDataNascimento(pessoas[i], maisNova) > 0) {
            maisNova = pessoas[i];
        }
    }

    printf("A pessoa mais velha é: %s\n", maisVelha.nome);
    printf("A pessoa mais nova é: %s\n", maisNova.nome);

    return 0;
}
