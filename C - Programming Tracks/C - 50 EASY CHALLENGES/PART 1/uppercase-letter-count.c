#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int uppercount,index=0;
    while(str[index] != '\0'){
        if(isupper(str[index])){
            uppercount += 1;
        }
        index += 1;
    }
    printf("%d",uppercount);

}
