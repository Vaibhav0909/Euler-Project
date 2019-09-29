#include<stdio.h>
void main()
{
    int i,j,n=10001,count=1;

        for(i=2;count<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {printf("%d\n",i);
        count++;}
    }
}

