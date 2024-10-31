#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
   int main(void){

     FILE * pont_arq;
     char palavra[20];

     pont_arq = fopen("moisop.txt","w");



     printf("O arquivo foi criado com sucesso! \n");


    if(pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        return 1;
    }
else{
    printf("Escreva uma palavra para testar gravacao do arquivo\n");
    scanf("%s",palavra);
}
  fprintf(pont_arq,"%s",palavra);

  fclose(pont_arq);

   printf("dados gravados com sucesso");
   getch();





   return 0;}
