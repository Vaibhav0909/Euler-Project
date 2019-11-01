#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d=0,e=1000;
    for(c=5;c<500;c++)
    {
        for(b=4;b<c;b++)
        {
            for(a=3;a<b;a++)
            {
               if(a+b+c==e)
               {
                   if(a*a+b*b==c*c)
                   {
                       d=1;
                       break;
                   }
               }

            }
            if(d==1)
                break;
        }
        if(d==1)
            break;
    }
    int k=a*b*c;
    printf("The product of digits %d\n",k);
    printf("%d %d %d",a,b,c);
}
