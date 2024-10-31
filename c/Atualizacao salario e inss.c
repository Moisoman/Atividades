#include <stdio.h>
#include <stdlib.h>


   int main(){

         float salario;
         float salario_novo;
         float inss;
         float taxa;

           printf("Digite o seu salario bruto\n");
           scanf("%f",&salario);

           if(salario <1400){
                taxa = 0.08;
            inss = 0.08*salario;
            salario_novo = salario - inss;
            printf("Para o salario bruto de %.2f  o desconto do inss é de %.2f  e o salario liquido e %.2f  a taxa e de %.2f",salario,inss,salario_novo,taxa);

           }
           else if(1400<=salario && salario<=2100){
                taxa = 0.09;
                 inss = 0.09*salario;
            salario_novo = salario - inss;
            printf("Para o salario bruto de %.2f  o desconto do inss e de %f  e o salario liquido e %.2f  a taxa e de %.2f",salario,inss,salario_novo,taxa);

           }
           else if(2100<salario){
                taxa = 0.11;
             inss = 0.11*salario;
            salario_novo = salario - inss;
            printf("Para o salario bruto de %.2f  o desconto do inss é de %.2f  e o salario liquido e %.2f  a taxa e de %.2f ",salario,inss,salario_novo,taxa);
           }



   return 0;}



/*switch (expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}*/
