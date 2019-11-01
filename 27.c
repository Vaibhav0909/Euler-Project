#include <stdio.h>
#include<math.h>

int isPrime(int n){
  int i;
  if (n<=0)
    return 0;
  if (n==2)
    return 1;
  for (i=2;i*i<n;i++)
    if(n%i==0)
      return 0;
  return 1;
}

int main(){
  int a,b,n,count=0,maximum=0,i,j;

  for (i=-999;i<1000;i++)
    {
    for (j=-999;j<1000;j++)
          {
      count=0;
      for (n=0;n<1000;n++)
              {
                if(!isPrime((n*n)+(i*n)+j))
                break;
                 count++;
      }
      if (count>maximum){
        maximum=count;
        a=i;
        b=j;
      }
    }
  }
  printf("%d",a*b);
return 0;
}
