#include<stdio.h>
void main()
{
    int t,f,s;
    printf("enter the first no");
    scanf("%d",&f);
    printf("enter the second no");
    scanf("%d",&s);
    t=f;
    f=s;
    s=t;
    printf("%d\t",f);
    printf("%d",s);
}
