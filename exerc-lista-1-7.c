#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void main () {
   
    printf("Digite 'Faculdade da Cidade': \n");
    char facul[255];
    setbuf(stdin,0);
    fgets(facul, 255, stdin);
    facul[strlen(facul)-1] = '\0';
    printf("você digitou %s",facul);
    printf("\n");
    }

    
    