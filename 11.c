#include<stdio.h>
int main()
{
    int size=20,i,current=0,initial=0;
    int array[size][size];
    for(i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
               {
                   scanf("%d",&array[j][i]);
               }
    }
    for(int y=0;y<size;y++)
    {
        for(int x=0;x<size;x++)
        {
            if(x+3<size)
            {
                int initial=array[x][y]*array[x+1][y]*array[x+2][y]*array[x+3][y];
                if(initial>current)
                    current=initial;
            }
            if(y+3<size)
            {
                int initial=array[x][y]*array[x][y+1]*array[x][y+2]*array[x][y+3];
                if(initial>current)
                    current=initial;
            }

           if(x+3<size&&y+3<size)
           {
               int initial=array[x][y]*array[x+1][y+1]*array[x+2][y+2]*array[x+3][y+3];
                if(initial>current)
                    current=initial;
           }
           if(x+3<size&&y>=3)
           {
               int initial=array[x][y]*array[x+1][y-1]*array[x+2][y-2]*array[x+3][y-3];
                if(initial>current)
                    current=initial;
           }

        }
    }
        printf("%d",current);

    }


