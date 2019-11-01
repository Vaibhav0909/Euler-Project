#include<stdio.h>
int findLCM();
void main()

{
    long long int i,a=2;
     for(i=1;i<=25;i++)
     {
         a=findLCM(a,i);
     }
     printf("The LCM is %lld",a);
}
findLCM(long long int a, long long int b)
{
    long long int large,i,small;
    large=a>b?a:b;
    small=a>b?b:a;
    for(i=large;;i+=large)
    {
        if(i%small==0)
            {return i;}

    }
}
