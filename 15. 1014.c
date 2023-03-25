#include<stdio.h>
int main()
{
    int distance;
    double fuel,average;
    scanf("%d",&distance);
    scanf("%lf",&fuel);
    average=distance/fuel;
    printf("%.3lf km/l\n",average);
    return 0;
}
