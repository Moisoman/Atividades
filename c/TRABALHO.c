#include <stdio.h>
#include <stdlib.h>


   int main(){
     int numero = 0;
     int negativo_num = 0;
     int positivo_num = 0;
     int i;
     int zeros = 0;
     printf("digite o primeiro numero");
     scanf("%d",&numero);

        for(i=0;i<=20;i++){
            printf("digite o proximo numero\n");
            scanf("%d",&numero);

            if(numero>0)
                positivo_num = positivo_num + numero;
            else if(numero<0)
                negativo_num = negativo_num + numero;
            else {
                zeros = zeros +1;

            }

        }

        printf("%d numeros positvos\n",positivo_num);
        printf("%d numeros negativos\n",negativo_num);
        printf("%d quantidade de zeros\n",zeros);

   return 0;}
