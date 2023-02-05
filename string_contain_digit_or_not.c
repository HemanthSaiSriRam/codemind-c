#include<stdio.h>
int main()
{
	char str[100],dgc=0,i;
	scanf("%s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
		{
			dgc++;
		}
	}
	if(str[i]=dgc)
	    printf("Contains %d digit",dgc);
	else
	    printf("Doesn't contain digit");
}