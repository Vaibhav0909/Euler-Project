#include<stdio.h>
void main()
{
    int i=1,j,c=0,a=0;
    for(i=i*(i+1)/2;i<=21;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                {c++;
                printf("%d\n",c);}
            if(c==4)
            {
                a=i;

                break;
            }
        }
    }
    printf("%d",a);
}
