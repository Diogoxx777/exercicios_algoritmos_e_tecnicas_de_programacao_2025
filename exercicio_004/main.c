#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bem Vindo, usuario!\n");
    printf("Vamos comparar qual o maior valor digitado por voce!\n\n");

    double vNum1;
    printf("Digite o primeiro valor: ");
    scanf("%lf", &vNum1);

    double vNum2;
    printf("Agora o segundo valor: ");
    scanf("%lf", &vNum2);

    double vNum3;
    printf("Ok! agora o ultimo valor: ");
    scanf("%lf", &vNum3);

    if (vNum1 >= vNum2 && vNum1 >= vNum3)
    {

        printf("\nO maior valor digitado foi: %.2lf!\n\n", vNum1);
    }

    else if (vNum2 >= vNum1 && vNum2 >= vNum3)
    {
        printf("\nO maior valor digitado foi: %.2lf!\n\n", vNum2);
    }

    else
    {
        printf("\nO maior valor digitado foi: %.2lf!\n\n", vNum3);
    }

    return 0;
}
