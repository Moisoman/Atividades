#include <stdio.h>
#include <stdlib.h>

int main(void){


 char ch[15];
 int valor [15];

 int i = 0 ;

  FILE *ptrArq;

   ptrArq = fopen("binario.txt","rb");

   if(ptrArq != NULL)
     printf("arquivo criado com sucesso");

   else
   {
   printf("\n\n Erro: Arquivo nao foi aberto");
   system("pause");
   exit(1);

   }

   fread(ch,sizeof(ch),1,ptrArq);
   fread(valor,sizeof(valor),1,ptrArq);

   //fwrite(ch,sizeof(ch),15,ptrArq);


   fclose(ptrArq);






return 0;}
