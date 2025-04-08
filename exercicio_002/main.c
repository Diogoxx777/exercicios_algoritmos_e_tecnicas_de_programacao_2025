#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vNome[50];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(vNome);

    int vIdade;
    printf("Digite sua idade: ");
    scanf("%d", &vIdade);

    printf("\nBem vindo, %s!\n", vNome);
    printf("Voce tem %d anos!\n\n", vIdade);

    return 0;
}
