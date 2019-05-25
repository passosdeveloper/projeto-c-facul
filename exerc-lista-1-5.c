#include <stdio.h>
#include <stdlib.h>
int a,b,resto;
int main () {
    printf("Digite o primeiro número: \n");
    scanf("%d",&a);
    printf("Digite o segundo número: \n");
    scanf("%d",&b);
    resto = a % b;
    printf("O resto da divisão entre os números é: %d",resto);
    printf("\n");


    
    
}