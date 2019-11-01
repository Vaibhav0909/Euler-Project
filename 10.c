#include<stdio.h>
#include<math.h>
#define BELOW 2000000
int isaprime(int a);
int main(void)
{
    int i;long long int sum=0;
    for(i=2;i<BELOW;i++)
    {
        if(isaprime(i)==1)
        {
               sum=sum+i;
               printf("%d\t%lld\t\n",i,sum);

        }
    }
    printf("%lld",sum+5);
    getch();
    return 0;
}
int isaprime(int a)
{
    int j;
     if(a%2==0||a%3==0)
            return 0;
    for(j=5;j<= sqrt(a); j++)
    {
       if(a%j==0)
            {
            return 0;
            }
    }
        return 1;
}
