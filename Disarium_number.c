#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a,b,c=0,sum=0;
    scanf("%d",&n);
    a=n;
    b=n;
    while(n>0)
    {
        m=n%10;
        c++;
        n/=10;
    }
    while(a>0)
    {
        m=a%10;
        sum+=pow(m,c);
        a/=10;
        c--;
    }
    if(sum==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}