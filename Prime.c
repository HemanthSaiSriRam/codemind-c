#include<stdio.h>  
int main()
{    
int n,i,m=0,flag=0;    
scanf("%d",&n);    
for(i=1;i<=n;i++)    
{    
if(n%i==0)    
{    
flag++;    
}    
}    
if(flag==2)    
printf("Prime");
else
printf("Not Prime");
return 0;  
 }    