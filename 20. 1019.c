#include<stdio.h>
int main()
{
    int N,a,b,c,d;
    scanf("%d",&N);
    a=N/3600;
    N=N%3600;
    c=N/60;
    d=N%60;
    printf("%d:%d:%d\n",a,c,d);
    return 0;
}
