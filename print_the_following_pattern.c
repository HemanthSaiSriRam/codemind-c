#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char ch='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",ch);
        }
        printf("
");
        ch++;
    }
}