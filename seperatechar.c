#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    int i,j=0;
   char str[100],temp[100];
   scanf("%[^\n]s",str);
   for(i=0;str[i];i++)
   {
       temp[j++]=str[i];
       if(str[i]!=32)
       {
       temp[j++]=32;
       }
   }
   printf("%s",temp);
   
}