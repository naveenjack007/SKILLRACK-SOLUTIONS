#include<stdio.h>
#include<stdlib.h>

int main()
{
    char carname[1000],resultantcar[1000];
    double carmileage;
    double minimum =1000;
    while(scanf("%[^@]@%lf",carname,&carmileage)>0)
    {
        if(carmileage<minimum)
        {
            minimum = carmileage;
            strcpy(resultantcar,carname);
        }
    }
    printf("%s",resultantcar);

}
