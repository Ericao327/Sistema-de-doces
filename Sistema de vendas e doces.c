#include <stdio.h>

#define BRIGADEIRO_PRICE 2.0
#define BEIJINHO_PRICE 1.5

// Função para calcular o total da compra
float calcularTotal(int brigadeiros, int beijinhos) {
    return (brigadeiros * BRIGADEIRO_PRICE) + (beijinhos * BEIJINHO_PRICE);
}

int main() {
    int brigadeiros = 0, beijinhos = 0;
    float total;

    printf("Bem-vindo(a) ao sistema de vendas de brigadeiro e beijinho!\n");

    // Pedindo a quantidade de brigadeiros
    printf("Quantos brigadeiros você deseja comprar? ");
    scanf("%d", &brigadeiros);

    // Pedindo a quantidade de beijinhos
    printf("Quantos beijinhos você deseja comprar? ");
    scanf("%d", &beijinhos);

    // Calculando o total
    total = calcularTotal(brigadeiros, beijinhos);

    // Imprimindo o total
    printf("Total a pagar: R$%.2f\n", total);

    return 0;
}
