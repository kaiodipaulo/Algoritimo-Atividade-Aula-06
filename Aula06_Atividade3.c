#include <stdio.h>

int main() {
    int estoque[10];
    int maiorQtd, maiorIndice = 0;
    int qtdMais20 = 0;
    int i;

    printf("Digite a quantidade em estoque dos 10 produtos:\n");
    for (i = 0; i < 10; i++) {
        printf("Produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    maiorQtd = estoque[0];

    printf("\n--- Relatorio de Estoque ---\n");
    for (i = 0; i < 10; i++) {
        printf("Produto %d: %d unidades\n", i + 1, estoque[i]);

        if (estoque[i] > maiorQtd) {
            maiorQtd = estoque[i];
            maiorIndice = i;
        }

        if (estoque[i] > 20) {
            qtdMais20++;
        }
    }

    printf("\n--- Produtos com Estoque Baixo (< 5) ---\n");
    for (i = 0; i < 10; i++) {
        if (estoque[i] > 0 && estoque[i] < 5) {
            printf("Produto %d (Quantidade: %d)\n", i + 1, estoque[i]);
        }
    }

    printf("\n--- Produtos Esgotados (= 0) ---\n");
    for (i = 0; i < 10; i++) {
        if (estoque[i] == 0) {
            printf("Produto %d\n", i + 1);
        }
    }

    printf("\nProdutos com mais de 20 unidades: %d\n", qtdMais20);
    printf("Produto com maior quantidade: Produto %d com %d unidades\n", maiorIndice + 1, maiorQtd);

    return 0;
}
