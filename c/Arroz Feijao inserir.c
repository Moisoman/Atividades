#include<stdio.h>
#include <stdlib.h>

    int main(){

           int codigo, contArroz, contFeijao, contAcucar = 0;
           contArroz = contFeijao = contAcucar = 0;

           do{

            printf("0 ---- encerrar\n");
            printf("1 -- incluir um arroz no estoque\n");
            printf("2 -- incluir um feijao no estoque\n");
            printf("3 -- incluir um acucar no estoque\n");
            printf("4 -- relatorio de inclusoes \n");
            printf("escolha uma opcao:  ");
            scanf("%d", &codigo);

            switch (codigo){
        case 0:
            printf("encerra o programa\n");
            break;
        case 1:
            printf("incluir um arroz no estoque\n");
            contArroz++;
            break;
            case 2:
            printf("incluir um feijao no estoque\n");
            contFeijao++;
            break;
            case 3:
            printf("incluir um acucar no estoque\n");
            contAcucar++;
            break;
            case 4:
            printf("relatorio do estoque\n");
            printf("acucar   %d\narroz   %d\nfeijao     %d\n",contAcucar,contArroz,contFeijao);
            break;
            default:
                printf("invalido");
                break;


            }
            system("pause");



           }while(codigo !=0);












    return 0;}
