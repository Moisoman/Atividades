#include <stdio.h>
#include <stdlib.h>


   int main(void){
   char ch[15] = "teste geral";
   int valor[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
     FILE *ptrArq;

      ptrArq = fopen("binario.bin","wb");
    if(ptrArq !=0){
    printf("o foi criado com sucesso");
    }else
    {
    printf("\n\nErro: o arquivo binario.bin nao foi aberto");
    system("pause");
    exit(1);

    }
   fwrite(ch,sizeof(char),15,ptrArq);
   fwrite(valor,sizeof(int),15,ptrArq);

   fclose(ptrArq);

   return 0;}
