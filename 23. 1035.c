#include<stdio.h>
int main()
{
    int A,B,C,D,S1,S2,S;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(A%2==0 && B>C && D>A && C+D>A+B && C>0 && D>0)
    {
        printf("Valores aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");
        return 0;
}
