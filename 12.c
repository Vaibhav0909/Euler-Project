#include<stdio.h>
#include<math.h>
int main()
{
    int counter;
    long long int  num=0,i=1;
    while(numberofdivisors(num)<500)
    {
        num=i*(i+1)/2;
        i++;
    }
    printf("%lld",num);

}
int numberofdivisors(long long int number)
{
    int count=0;
    long long int a=sqrt(number);
    for(int i=1;i*i<=number;i++)
    {
        if(number%i==0)
            count+=2;
        if(a*a==number)
            count--;
    }

    return count;

}
