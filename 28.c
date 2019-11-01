#include<stdio.h>
#include<math.h>
int main()
{
    long long int sum1=0,sum2=0,sum3=0,sum4=0,sum,i,max=1001;
    for(i=1;i<=max;i+=2)
    {
        sum1=sum1+i*i;
    }
    for(i=1;i<=max/2+1;i++)
    {
        sum2 =sum2+8*i*i-16*i+10;
    }
    for(i=0;i<=max;i+=2)
    {
        sum3=sum3+i*i+1;
}

    sum=sum1+sum2+sum3;
    printf("%lld",sum-3);
}
