#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<2000; i++){

        int vIdade;
        printf("Digite a sua IDADE: ");
        scanf("%i", &vIdade);

        double vPeso;
        printf("Digite seu PESO: ");
        scanf("%lf", &vPeso);

        if (vIdade < 18){
            printf("Infanto Juvenil\n\n");
        }
        else{
            printf("Profissional!\n");
            if(vPeso < 70){
                printf("Seu peso e: LEVE!\n\n");
            }
            else if(vPeso >= 70 && vPeso < 90){
                printf("Seu peso e: PESADO!\n\n");
            }
            else{
                printf("Cuidado RISCO DE OBESIDADE!\n\n");
            }
        }
    }
    return 0;
}
