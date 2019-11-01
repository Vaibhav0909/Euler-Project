#include<stdio.h>
void main()
{
    long long int a[1000],c=0,i,j,sum=1,k;
    for(k=0;k<1000;k++)
    {scanf("%1lld",&a[k]);}
    for(j=0;j<987;j++)
    {
        for(i=j;i<=(12+j);i++)
        {
            sum=sum*a[i];
        }
            if(sum>c)
            {
                c=sum;
            }
            sum=1;
    }
        printf("\n\n\n the largest product is %lld",c);
    }

