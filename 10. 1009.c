#include<stdio.h>
int main()
{
    char name[20];
    double basic_salary,total_salary;
    scanf("%s",&name);
    scanf("%lf %lf",&basic_salary,&total_salary);
    total_salary=(basic_salary+(total_salary*15)/100);
    printf("TOTAL = R$ %.2lf\n",total_salary);
    return 0;
}
