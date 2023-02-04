#include<stdio.h>
int main()
{
    int i,j,n,max[10],a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&max[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(max[i]>max[j])
            {
                a=max[i];
                max[i]=max[j];
                max[j]=a;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",max[i]*max[i]);
    }
}