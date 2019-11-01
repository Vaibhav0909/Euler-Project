#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,carry=0;
    float num_digits=0;
    printf("Enter the number n\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        num_digits=num_digits+log10(i);
    }
    printf("Number of digits %d\n",(int)num_digits+1);
    int c=(int)num_digits+1;
    int arr[c];
    for(int i=0;i<c-1;i++)
    {
        arr[i]=0;
    }
    arr[c-1]=1;

    for(int j=1;j<=n;j++)
    {
        for(int k=c-1;k>=0;k--)
        {
            arr[k]=arr[k]*j+carry;
            carry=arr[k]/10;
            arr[k]=arr[k]%10;
        }
    }
    printf("The value of factorial is ");
    for(int a=0;a<c;a++)
    {
        printf("%d",arr[a]);
    }
    int sum=0;
    for(i=0;i<c;i++)
    {
        sum=sum+arr[i];
    }
    printf("\n\n\n The value of sum is %d",sum);

}
