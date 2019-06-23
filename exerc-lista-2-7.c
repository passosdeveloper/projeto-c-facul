int main(void)
{
    int a, b, c;
    int i; //controle
    int ordem; //decresc -1 cresc. 11

    printf("digite o primeiro numero");
    scanf("%d",&a);
    printf("digite o segundo numero");
    scanf("%d",&b);
    printf("digite o terceiro numero");
    scanf("%d",&c);
    if(a<=b)
        ordem = 1;
    else
        ordem = -1;
    for (i = a; i != b + ordem; i = i + ordem){
        printf("%d",i);
    }    

        return 0;
}