#include<stdio.h>
int main()
{
    double x,y,z,area;
    scanf("%lf %lf %lf",&x,&y,&z);
    if((x||y||z)!=0 && ((x+y)>z && (y+z)>x && (z+x)>y))
    {
        printf("Perimetro = %.1lf\n",x+y+z);
    }
    else
    {
        area=((x+y)/2)*z;
        printf("Area = %.1lf\n",area);
    }
    return 0;
}
