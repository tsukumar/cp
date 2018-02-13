#include<stdio.h>
#include<string.h>
void main()
{
   char a[100];
   int length,count=0,c,j,s,len;
   scanf("%s",a);
   length=strlen(a);
   
   for(j=0;j<length;j++)
   {
       if(a[j]>='0' && a[j]<='9')
       {
       count++;
       len=1;
       }
       else
      len=2;
   }
   if(len==1)
      printf("%d",count);
   else
      printf("0");

}
