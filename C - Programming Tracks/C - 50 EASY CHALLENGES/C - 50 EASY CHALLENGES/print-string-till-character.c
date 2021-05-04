#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100],ch;
    scanf("%[^\n]\n%c",str,&ch);
    int index=0;
    while(str[index] != '\0' && str[index] != ch){
        printf("%c",str[index]);
        index += 1;
    }

}
