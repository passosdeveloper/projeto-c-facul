#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () 
{

   int n1,n2,n3;
    printf("Digite o primeiro número para comparação: \n");
    scanf("%d",&n1);  
    printf("Digite o segundo número para comparação: \n");
    scanf("%d",&n2);
    printf("Digite o terceiro número para comparação: \n");
    scanf("%d",&n3);
    
   
    
    if (n1==n2 && n1 == n3 && n2==n3){ 
        printf("%d e %d e %d são iguais!\n",n1,n2,n3);
                           }
        else{
            printf("Apenas 2 são diferentes!\n");
            }
            if (n1<n2 && n1<n3) {
            printf("%d é o menor número de todos\n",n1);
                                     }
                                       
        if(n2<n1 && n2<n3 ){
            printf("%d é o menor número de todos\n",n2); 
                          }
            else {
            if (n3<n1 && n3<n2){
               printf("%d é o menor número de todos\n",n3); 
                              }
                 }              

         
    
        
    
 }