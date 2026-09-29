#include <stdio.h>

int main() {
    char nome[100];
    float media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a media do aluno: ");
    scanf("%f", &media);

    printf("\nAluno: %s\n", nome);
    printf("Media: %.2f\n", media);

}
