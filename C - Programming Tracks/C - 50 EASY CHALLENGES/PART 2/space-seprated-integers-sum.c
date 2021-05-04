#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0,j=0,sum=0;
    int arr[10000];
    char temp;
    do{
        scanf("%d%c",&arr[i],&temp);
        i++;
    }while(temp != '\n');
    for(j=0;j<i;j++){
        sum = sum+arr[j];
    }
    printf("%d",sum);

}
