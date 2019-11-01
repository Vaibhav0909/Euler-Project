#include<stdio.h>
int main()
{
    int sum=0,sum_total=0,i,num1,a,fact;
    for(i=3;i<=998888;i++)
    {
        num1=i;
        sum=0;
        while(num1>0)
        {
            a=num1%10;
            fact=factorial(a);

            sum=sum+fact;
            num1=num1/10;
        }
        if(sum==i)
            {
                sum_total=sum_total+i;
            }
    }
    printf("%d",sum_total);
}
int factorial(int number)
{
   int array[10]={1,1,2,6,24,120,720,5040,40320,362880};
   int i=number;
   return array[i];

}
