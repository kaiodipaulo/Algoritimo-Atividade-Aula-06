#include <stdio.h>

int main() {
    int numeros[10];
    int busca, contagem = 0;
    int i, impressoes = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite um numero para pesquisar: ");
    scanf("%d", &busca);

    for (i = 0; i < 10; i++) {
        if (numeros[i] == busca) {
            contagem++;
        }
    }

    if (contagem > 0) {
        printf("O numero %d foi encontrado %d vezes.\n", busca, contagem);
        printf("Posicoes: ");
        for (i = 0; i < 10; i++) {
            if (numeros[i] == busca) {
                if (impressoes > 0) {
                    printf(", ");
                }
                printf("%d", i);
                impressoes++;
            }
        }
        printf("\n");
    } else {
        printf("O numero %d NAO foi encontrado no array.\n", busca);
    }

}
