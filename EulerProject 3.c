#include<stdio.h>
void main()
{
   long long int num=600851475143;
    int i,j,a=0;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    break;
                }

            }
            num=num/i;

            if(j==i)
            {
                a=i;
            }
        }
        continue;


    }
    printf("The largest factor is %d",a);


}
