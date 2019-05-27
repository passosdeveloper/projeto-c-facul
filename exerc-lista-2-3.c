#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () {

   int n,n1;
    printf("Digite um número e descubra se ele é maior, menor ou igual ao próximo: \n");
    printf("(não digite os números iguais por favor!)\n");
    scanf("%d",&n);  
    printf("Digite o número de comparação: \n");
    scanf("%d",&n1);
    if (n==n1) { 
        printf("Onde você entendeu que podia digitar os números iguais? Você é demente?\n");
    }
    else{
        if (n > n1) {
            printf("O número %d é maior!\n",n);
                 }
        else {
            printf("O número %d é menor!\n",n);
        }
    }

}