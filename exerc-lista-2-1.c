#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () {

   int n;
      
    printf("Digite um número e descubra se ele é par ou ímpar: \n");
    scanf("%d",&n);
    if (n==0) { 
        printf("esse número não pode ser zero\n");
    }
    else{
        if (n % 2 == 0) {
            printf("Esse número é par!\n");
                 }
        else {
            printf("Esse número é ímpar\n");
        }
    }

}