#include<stdio.h>
void main()
{
    int i,j=1,k,flag,c=0;
    for(i=(j*(j+1))/2;;j++)
    {
        for(k=2;k<i;k++)
        {
            if(i%k==0)
            {

            }
            if(c==500)
            {
                flag=1;
                break;
            }
        }

        c=0;
        if(flag==1)
        {
            break;
        }
    printf("%d",i);
    }
    printf("%d",i);
}
