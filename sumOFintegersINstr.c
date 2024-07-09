#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j=0,sum=0;
   char str[100],temp[100];
   scanf("%[^\n]s",str);
   for(i=0;str[i];i++)
   {
       if(str[i]>=48&&str[i]<=57)
       {
           sum=sum+(str[i]-48);
       }
   }
   printf("%d",sum);
   
   
}