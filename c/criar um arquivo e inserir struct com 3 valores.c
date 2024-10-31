#include <stdio.h>
#include <stdlib.h>
#define QTD 3

 typedef struct{
    int matricula;
    char nome[20];
    float nota;
 }CAD_INFO;


   int main(void){

         int i;

         FILE * ptrArq;
         ptrArq = fopen("arquivodados.txt","w");
   CAD_INFO vetDados[QTD] = {
       {10,"Felipe",8.8},
       {20,"Pedro",6.6 },
        {30,"Moisoman",0}
   };

      for(i=0;i<QTD;i++){
        fprintf(ptrArq,"%d   %s   %.2f\n",vetDados[i].matricula,vetDados[i].nome,vetDados[i].nota);
      }
      printf("Struc gravado");

    fclose(ptrArq);

   return 0;}
