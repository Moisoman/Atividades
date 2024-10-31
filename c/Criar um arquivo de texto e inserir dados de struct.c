#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef struct Palavra{
          char palavra[50];
          int idade;

     };



   int main(void){

     FILE * pont_arq;


     pont_arq = fopen("moisop.txt","w");

       struct Palavra palavras[3] ={
               {"xupetao",25},
               {"desgracado",80},
               {"cavalo",160}
       };


     printf("O arquivo foi criado com sucesso! \n");


    if(pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        return 1;
    }
else{
    printf("Gravando struct palavra\n");

}
   for(int i=0;i<3;i++){

  fprintf(pont_arq,"%s %d\n",palavras[i].palavra, palavras[i].idade);
   }
  fclose(pont_arq);

   printf("dados gravados com sucesso");






   return 0;}
