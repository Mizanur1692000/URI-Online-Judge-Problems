#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf %lf %lf",&A,&B,&C);
    TRIANGULO=(.5*A*C);
    CIRCULO=(pi*C*C);
    TRAPEZIO=(.5*(A+B)*C);
    QUADRADO=(B*B);
    RETANGULO=(A*B);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
    return 0;
}
