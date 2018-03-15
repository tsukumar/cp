#include<stdio.h>
void main()
{
	int n,i,v,b,c;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	v=pow(2,i);
		if(v>n)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
}
