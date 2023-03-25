#include<stdio.h>
int main()
{
    int p1,p2,n1,n2;
    float u1,u2,total;
    scanf("%d %d %f",&p1,&n1,&u1);
    scanf("%d %d %f",&p2,&n2,&u2);
    total=(n1*u1)+(n2*u2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
