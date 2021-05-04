#include<stdio.h>
int main()
{
    char a[150];
    fgets(a, sizeof(a), stdin);
    for(int i = 0, j; a[i] != '\0'; ++i)
    {
        while(!(a[i] >= 'a' && a[i] <= 'z') && !(a[i] >= 'A' && a[i] <= 'Z') && !(a[i] == '\0') )
        {
            for(j = i; a[j] != '\0'; ++j)
            {
                a[j] = a[j+1];
            }
            a[j] = '\0';
        }
    }
    puts(a)
    return 0;
}
