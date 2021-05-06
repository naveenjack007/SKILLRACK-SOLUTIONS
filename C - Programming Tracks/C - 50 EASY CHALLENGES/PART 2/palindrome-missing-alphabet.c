#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[100];
    int i,j,a;
    scanf("%s",s);
    a = strlen(s);
    if(s[0]!=s[a-1])
    {
        printf("%c",s[0]);
        exit(0);
    }
    for(i=0,j=a-1;i<a/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            if(s[i+1] == s[j])
            {
                printf("%c",s[i]);
            }
            else
            {
                printf("%c",s[j]);
            }
            break;
            
        }
    }

}
