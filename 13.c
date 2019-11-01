#include<stdio.h>
sum[50];
int carry(int);
void main()
{
    int integers[5000],i,j,k=0,t,c=0,a=1;
    for(i=0;i<5000;i++)
    {
        scanf("%1d",&integers[i]);
    }
    for(i=49;i>-1;i--)
    {
        for(j=0;j<100;j++)
            {
            sum[i]=sum[i]+integers[50*j+i];
            }
            sum[i]=sum[i]+c;

            if(sum[i]>10)
            {
                c=carry(sum[i]);
            }
            if(i>0)
            {sum[i]=sum[i]%10;}

    }
    printf("\n\n\n\n");
    for(t=0;t<8;t++)
    {
        printf("%d\n",sum[t]);
    }

}
int carry(int a)
{
        a=a/10;

        return a;


}
