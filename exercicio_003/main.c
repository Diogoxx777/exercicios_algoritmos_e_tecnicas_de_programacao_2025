#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bem-vindo! Este programa ira ajuda-lo a calcular a soma de dois numeros.\n\n");

    double vV1;
    printf("Por favor, digite o primeiro numero: ");
    scanf("%lf", &vV1);

    double vV2;
    printf("Agora, digite o segundo numero: ");
    scanf("%lf", &vV2);

    double vSoma;
    vSoma = vV1 + vV2;

    printf("\nA soma dos dois numeros e: %.2lf!\n\n", vSoma);

    return 0;
}
