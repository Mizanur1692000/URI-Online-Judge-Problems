#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,MEDIA;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    MEDIA=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1lf\n",MEDIA);
    if(MEDIA>=7)
    {
        printf("Aluno aprovado.\n");
    }
    if(MEDIA<5)
    {
        printf("Aluno reprovado.\n");
    }
    if(MEDIA>=5 && MEDIA<=6.9)
    {
        printf("Aluno em exame.\n");
        double i;
        scanf("%lf",&i);
        printf("Nota do exame: %.1lf\n",i);
        if(i>=5)
        {
            printf("Aluno aprovado.\n");
        }
        if(i<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        double mediaFinal=(MEDIA+i)/2;
    printf("Media final: %.1lf\n",mediaFinal);
    }
    return 0;
}
