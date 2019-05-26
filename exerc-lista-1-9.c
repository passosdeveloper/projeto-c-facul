#include <stdio.h>
#include <stdlib.h>


   
int main () {

   float a;
   float b;
   float gorjeta;
   float totalconta;
   
    printf("Digite o valor da refeição: \n");
    scanf("%f",&a);
    printf("Digite o valor da bebida: \n");
    scanf("%f",&b);
    gorjeta = (a + b)*0.1;
    printf("10 porcento do garçom %f",gorjeta);
    totalconta = a+b+gorjeta; 
    printf("\n O valor da conta é %f",totalconta);
    totalconta = a+b-gorjeta;
    printf("\n O valor da conta sem gorjeta é: %f",totalconta);
    
    }