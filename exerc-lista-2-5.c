#include <stdio.h>

double valorAbsoluto(double x)
{
    if (x >= 0.0) return x;
    else return -(x);
}

int main(void)
{
    double valor;
    printf("Digite um número:\n");
    scanf("%lf", &valor);
    printf("%.2lf\n", valorAbsoluto(valor));
return 0;
}