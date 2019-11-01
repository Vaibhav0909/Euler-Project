#include<stdio.h>
int main()
{
    int a,b,d,c;
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=9;b++)
        {
            for(d=1;d<=9;d++)
            {
                c=10*a*b-9*a*d-b*d;
                if(c==0)

                {
                    if(a!=b&&b!=c)
                    printf("%d  %d  %d\n",a,b,d);
                }
            }
        }
    }
}
