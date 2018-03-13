#include <stdio.h>
#include<string.h>
void main()
{
	char s[20];
	int k,i;
	printf("enter the string and the k value:");
	scanf("%s %d",s,&k);
	for(i=0;i<k;i++)
	{
		printf("\t%c",s[i]);
	}
}
