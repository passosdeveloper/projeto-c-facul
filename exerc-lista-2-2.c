#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () {

   int n;
   int n1;   
    printf("Digite o primeiro número: \n");
    scanf("%d",&n);
    printf("Digite o segundo número: \n");
    scanf("%d",&n1);
    if (n==n1) { 
        printf("Esses números são iguais!\n");
    }
    else{
        printf("Esses números são diferentes!\n");
    }

}