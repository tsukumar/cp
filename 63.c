#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,count=0;
    printf("enter the string");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        
            count=count+1;
        
    }
    printf("%d",count+1);
    
}
