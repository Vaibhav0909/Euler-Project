#include<stdio.h>
void main()
{
    int i,j,sum=0,sum3,sum1=0,sum2;
    for(i=1;i<=100;i++)
    {
        sum=sum+(i*i);
    }
    for(i=1;i<=100;i++)
    {
        sum1=sum1+i;
    }
    sum2=sum1*sum1;
    sum3=sum2-sum;
    printf("%d",sum3);
}
