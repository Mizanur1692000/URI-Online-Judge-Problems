#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n/365;
    b=n%365;
    c=b/30;
    d=b%30;
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",c);
    printf("%d dia(s)\n",d);
    return 0;
}
