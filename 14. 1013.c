#include<stdio.h>
int main()
{
    int a,b,s,MairorAB;
    scanf("%d %d %d",&a,&b,&s);
    MairorAB=a;
    if(b>MairorAB)
    MairorAB=b;
    if(s>MairorAB)
    MairorAB=s;
    printf("%d eh o maior\n",MairorAB);
    return 0;
}
