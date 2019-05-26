#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void main () {
   int a;
   char b[1];
   float c;
    printf("Digite um número inteiro: \n");
    scanf("%d",&a);
    printf("Digite um caractere: \n");
    setbuf(stdin,0);
    fgets(b,1,stdin);
    printf("Digite um número racional: \n");
    scanf("%f",&c);
    printf("%f,%c,%d",c,b,a);
    printf("\n");
    }