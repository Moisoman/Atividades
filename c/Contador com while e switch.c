#include <stdio.h>
#include <stdlib.h>


  int main(){


      int numero;

      printf("Insira um numero de zero a dez\n");
      scanf("%d",&numero);

      while(numero<0 || numero >10 ||){
        printf("insira um valor valido  ");
        scanf("%d",&numero);
        system("pause");

      }


      switch (numero) {
  case 0:
    printf("esse e o numero ZERO");
    break;
  case 1:
    printf("esse e o numero UM");
    break;
     case 2:
    printf("esse e o numero DOIS");
    break;
     case 3:
    printf("esse e o numero TRES");
    break;
     case 4:
    printf("esse e o numero QUATRO");
    break;
     case 5:
    printf("esse e o numero CINCO");
    break;
     case 6:
    printf("esse e o numero SEIS");
    break;
     case 7:
    printf("esse e o numero SETE");
    break;
     case 8:
    printf("esse e o numero OITRO");
    break;
     case 9:
    printf("esse e o numero NOVE");
    break;
     case 10:
    printf("esse e o numero DEZ");
    break;

  default:
      printf("Insira um valor valido\n");

}




  return 0;}
