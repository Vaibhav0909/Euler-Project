#include<stdio.h>
void main()
{
    long long int a,b,c=0,i=0,sum=0;
    a=1;
    b=0;
    for(i=0;c<3524578;i++)
   {

        c=a+b;
        if(c%2==0)
        {
            sum=sum+c;
        }
        a=b;
        b=c;

   }
   printf("%lld",sum);
}
