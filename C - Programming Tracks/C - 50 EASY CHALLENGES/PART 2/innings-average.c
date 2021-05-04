#include<stdio.h>
#include<stdlib.h>

int main()
{
    static int array[20][20];
    int i,j;
    float m,sum1=0,sum2=0,avg1,avg2;
    scanf("%f",&m);
    for(i=0; i<m; ++i)
    {
        for(j=0; j<2; ++j)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(j=0; j<1; ++j)
    {
        for(i=0; i<m; ++i)
        {
            sum1 = sum1 + array[i][j];
        }
        avg1 = sum1/m;
        printf("%.2f\n",avg1);
    }
    for(j=1; j<2; ++j)
    {
        for(i=0; i<m; ++i)
        {
            sum2 = sum2 + array[i][j];
            
        }
        avg2 = sum2/m;
        printf("%.2f\n",avg2);
    }

}
