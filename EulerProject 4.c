#include<stdio.h>
long long int reverse(long long int);
void main()
{
    int i,j,flag=0;
    long long int c,d,a=0;
    for(i=999;i>1;i--)
    {
        for(j=999;j>1;j--)
        {
            c=i*j;
            d=reverse(c);
            if(d==c)
            {
                if(c>a)
                    a=c;
            }
        }
    }
    printf("the largest palindrome of three digits is %lld",a);
}
long long int reverse(long long int a)
{
    long long int res,sum=0;
    while(a>0)
    {res=a%10;
    sum=sum*10+res;
    a=a/10;}
    return sum;
}
