#include<stdio.h>
int main()
{
    int i,j,carry=0;
    int arr[304]={};
    arr[303]=1;

    for(i=0;i<1000;i++)
    {
        for(j=303;j>=0;j--)
        {
            arr[j]=arr[j]*2+carry;
            carry=arr[j]/10;
            arr[j]=arr[j]%10;

        }

    }
    int sum=0;
    for(int k=0;k<304;k++)
    {
    sum=sum+arr[k];
    }
    printf("%d",sum);
}
