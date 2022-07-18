#include<stdio.h>
int main()
{
    int i, m, j;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Not prime no");

        }
        else
        {
            printf("Prime no");
        }
    }
    return 0;
}