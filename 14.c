#include<math.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
   long long int i,j,c=0,p=1,k=0,l;
   int *num =(int*) malloc(sizeof(int)*1000000);//way to take one million inputs in array
    for(i=1000000;i>0;i--)
    {
        c=0;
        j=i;
        while(j>1)
        {
            if(j%2==0)
                {
                  j=j/2;
                  c=c+1;
                }
            else
                {
                  j=3*j+1;
                  c=c+1;
                }
                if(j==1)
                    num[i]=c;

        }


    }
    p=num[1];
     for(k=0;k<1000000;k++)
     {
         if(num[k]>p)
          {
            p=num[k];
            l=k;
          }
     }
     printf("%lld",l);
}
