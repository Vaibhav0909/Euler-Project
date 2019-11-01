#include<stdio.h>
void main()
{
    int i,j,n=10001,count=1;

        for(i=2;count<n;i++)
    {
        for(j=2;j*j<i;j++)
        {
            if(i%j==0)
                break;
        }
           if(i%j!=0)
            count++;
    }
          printf("%d",i-1);
}

