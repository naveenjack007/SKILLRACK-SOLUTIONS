#include<stdio.h>
 
int main()
{
    int hour, min, late=0;
    char ch;
    do
    {
        scanf("%d:%d%c",&hour,&min,&ch);
        if(hour>10 || (hour==10 && min>0))
            late++;
    }while(ch!='\n');
    printf("%d",late);
    return 0;
}
