#include <stdio.h>

#define BRIGADEIRO_PRICE 2.0
#define BEIJINHO_PRICE 1.5

float calcularTotal(int brigadeiros, int beijinhos) {
    return (brigadeiros * BRIGADEIRO_PRICE) + (beijinhos * BEIJINHO_PRICE);
}

int main() {
    int brigadeiros = 0, beijinhos = 0;
    float total;

    printf("Bem-vindo(a) ao sistema de vendas de brigadeiro e beijinho!\n");

    printf("Quantos brigadeiros você deseja comprar? ");
    scanf("%d", &brigadeiros);

    printf("Quantos beijinhos você deseja comprar? ");
    scanf("%d", &beijinhos);

    total = calcularTotal(brigadeiros, beijinhos);

    printf("Total a pagar: R$%.2f\n", total);

    return 0;
}
