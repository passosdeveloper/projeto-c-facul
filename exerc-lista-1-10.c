#include <stdio.h>
#include <stdlib.h>

int main () {

   int hora;
   int horamin;
   
    printf("Digite um valor de hora do dia: \n");
    scanf("%d",&hora);
    horamin = hora*60;
    printf("O número de minutos que se passarm até essa hora:%d",horamin);
    printf("\n");

    }