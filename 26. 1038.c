#include<stdio.h>
int main()
{
    int X,Y,TOTAL;
    scanf("%d %d",&X,&Y);
    switch(X)
        {
        case 1:
            {
                printf("Total: R$ %.2f\n",(float)4.00*Y);
                break;
            }
        case 2:
            {
               printf("Total: R$ %.2f\n",(float)4.50*Y);
               break;
            }
        case 3:
            {
               printf("Total: R$ %.2f\n",(float)5.00*Y);
               break;
            }
        case 4:
            {
               printf("Total: R$ %.2f\n",(float)2.00*Y);
               break;
            }
        case 5:
            {
               printf("Total: R$ %.2f\n",(float)1.50*Y);
               break;
            }
        }
    return 0;
}
